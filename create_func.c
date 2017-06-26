/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 14:26:18 by mponomar          #+#    #+#             */
/*   Updated: 2017/06/24 14:27:41 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

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

int			**create_math(int len)
{
	int		**math;
	int		i;

	i = 0;
	math = (int **)malloc(sizeof(int *) * (len + 2));
	while (i < (len + 2))
	{
		math[i] = (int *)malloc(sizeof(int) * (len + 2));
		ft_bzero(math[i], sizeof(math[i]) * (len + 2));
		i++;
	}
	return (math);
}
