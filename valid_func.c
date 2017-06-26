/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 14:41:47 by mponomar          #+#    #+#             */
/*   Updated: 2017/06/24 14:42:38 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void		put_st_en(int **math, t_in **in, int len)
{
	int		i;
	t_in	*tmp;

	tmp = *in;
	i = 0;
	while (tmp)
	{
		if (tmp->index == 1)
		{
			math[0][i + 1] = 1;
			math[i + 1][0] = 1;
		}
		else if (tmp->index == 2)
		{
			math[len + 1][i + 1] = 1;
			math[i + 1][len + 1] = 1;
		}
		i++;
		tmp = tmp->next;
	}
}

void		put_link(char *str1, char *str2, int **math, t_in **in)
{
	int		i;
	int		k;
	int		j;
	t_in	*tmp;

	tmp = *in;
	i = 0;
	k = 0;
	j = 0;
	while (tmp)
	{
		if (!(ft_strcmp(tmp->room, str1)))
			i = j;
		if (!(ft_strcmp(tmp->room, str2)))
			k = j;
		j++;
		tmp = tmp->next;
	}
	math[i + 1][k + 1] = 1;
	math[k + 1][i + 1] = 1;
}

int			next_link(t_map **tmp)
{
	t_map	*wow;
	int		i;
	int		k;

	wow = *tmp;
	i = 0;
	while (wow->next != NULL)
	{
		k = 0;
		if (wow->str[k] == '#')
			wow = wow->next;
		else
		{
			while (wow->str[k] != '\0')
			{
				wow->str[k] == ' ' ? i++ : 0;
				k++;
			}
			wow = wow->next;
		}
	}
	if (i > 0)
		return (0);
	return (1);
}
