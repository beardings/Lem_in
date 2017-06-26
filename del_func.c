/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 14:28:04 by mponomar          #+#    #+#             */
/*   Updated: 2017/06/24 14:28:51 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void		ft_delroom(char **room)
{
	int		i;

	i = 0;
	while (room[i] != NULL)
	{
		free(room[i]);
		i++;
	}
	free(room);
	return ;
}

void		ft_del_lem(t_lem **lem, int len)
{
	int		i;

	i = 0;
	if ((*lem)->math != NULL)
	{
		while (i < len + 2)
		{
			free((*lem)->math[i]);
			i++;
		}
		free((*lem)->math);
	}
	free(*lem);
	*lem = NULL;
	return ;
}

void		ft_del_in(t_in **in)
{
	t_in	*wow;
	t_in	*pop;

	wow = *in;
	while (wow)
	{
		pop = wow;
		wow = wow->next;
		free(pop->room);
		free(pop);
	}
	*in = NULL;
	return ;
}

void		ft_del_map(t_map **head)
{
	t_map	*wow;
	t_map	*pop;

	wow = *head;
	while (wow)
	{
		pop = wow;
		wow = wow->next;
		free(pop->str);
		free(pop);
	}
	*head = NULL;
	return ;
}
