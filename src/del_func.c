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

#include "../includes/lem_in.h"

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

void		ft_del_way(t_way **way)
{
	t_way *tmp;
	t_way *res;

	tmp = *way;
	while (tmp)
	{
		res = tmp->next;
		free(tmp);
		tmp = res;
	}
}

void		ft_del_ways(t_ways **ways)
{
	t_ways *tmp;
	t_ways *res;

	tmp = *ways;
	while (tmp)
	{
		res = tmp->next;
		ft_del_way(&tmp->way);
		free(tmp->cross);
		free(tmp);
		tmp = res;
	}
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
	free((*lem)->visit);
	ft_del_ways(&(*lem)->ways);
	free(*lem);
	*lem = NULL;
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
