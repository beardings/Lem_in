/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_funcn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 14:18:05 by mponomar          #+#    #+#             */
/*   Updated: 2017/06/24 14:18:09 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int			chint(char *str)
{
	int		i;
	int		len;


	i = 0;
	len = (int) ft_strlen(str);
	while (str[i] > 47 && str[i] < 58)
		i++;
	if (len == i)
	{
		if ((check_maxint(str)) == 1)
			return (1);
		else
			return (0);
	}
	return (0);
}

int			check_space(char *str)
{
	int		i;
	int		k;

	k = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			k++;
		i++;
	}
	if (k == 2)
		return (1);
	return (0);
}

int			it_numants(char *str, t_lem **lem)
{
	int		i;
	int		len;

	i = 0;
	if (str[i] == '\0')
		return (0);
	len = (int) ft_strlen(str);
	while (str[i] > 47 && str[i] < 58)
		i++;
	if (len == i)
	{
		if ((check_maxint(str)) == 1)
		{
			(*lem)->ants = ft_atoi(str);
			return (1);
		}
		else
			return (0);
	}
	else
		return (0);
}

int			it_command(char *str, t_in **in, t_map **tmp)
{
	if (!(ft_strcmp(str, "##end")))
	{
		*tmp = (*tmp)->next;
		if ((check_space((*tmp)->str)) == 1 && (yescom(2, in, (*tmp)->str)) == 1)
			return (1);
		else
			return (0);
	}
	else if (!(ft_strcmp(str, "##start")))
	{
		*tmp = (*tmp)->next;
		if ((check_space((*tmp)->str)) == 1 && (yescom(1, in, (*tmp)->str)) == 1)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}

int			it_comment(char *str)
{
	if (!(ft_strcmp(str, "##end")) || !(ft_strcmp(str, "##start")))
		return (2);
	if (str[0] == '#')
		return (1);
	else
		return (0);
}
