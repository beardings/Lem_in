/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 14:26:18 by mponomar          #+#    #+#             */
/*   Updated: 2017/07/04 14:58:16 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

t_in		*create_in(void)
{
	t_in	*in;

	in = (t_in *)malloc(sizeof(t_in));
	in->room = NULL;
	in->index = 0;
	in->next = NULL;
	in->x = 0;
	in->y = 0;
	return (in);
}

t_lem		*create_lem(void)
{
	t_lem	*lem;

	lem = (t_lem *)malloc(sizeof(t_lem));
	lem->ants = -1;
	lem->math = NULL;
	lem->index = 0;
	lem->visit = NULL;
	lem->ways = NULL;
	return (lem);
}

t_map		*create_map(void)
{
	t_map	*map;

	map = (t_map *)malloc(sizeof(t_map));
	map->str = NULL;
	map->next = NULL;
	return (map);
}

t_way		*create_way(void)
{
	t_way *way;

	way = (t_way *)malloc(sizeof(t_way));
	way->name = 0;
	way->next = NULL;
	return (way);
}

int			**create_math(int len)
{
	int		**math;
	int		i;
	int		k;

	i = 0;
	math = (int **)malloc(sizeof(int *) * (len + 2));
	while (i < (len + 2))
	{
		math[i] = (int *)malloc(sizeof(int) * (len + 2));
		k = 0;
		while (k < len + 2)
		{
			math[i][k] = 0;
			k++;
		}
		i++;
	}
	return (math);
}
