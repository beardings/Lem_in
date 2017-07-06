/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ants_cross.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 14:59:35 by mponomar          #+#    #+#             */
/*   Updated: 2017/07/04 15:00:06 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int			*fill_math(t_way **way, int len)
{
	int		*math;
	t_way	*tmp;
	int		i;

	i = 0;
	tmp = *way;
	math = (int *)malloc(sizeof(int) * len + 1);
	while (i < len)
	{
		math[i] = 0;
		i++;
	}
	math[i] = -1;
	i = 0;
	while (tmp)
	{
		math[i] = tmp->name;
		i++;
		tmp = tmp->next;
	}
	return (math);
}

void		find_cross(t_ways **ways, t_in **in, int ants)
{
	int		i;
	t_ways	*tmp;
	int		**math;

	i = 0;
	tmp = *ways;
	while (tmp)
	{
		tmp->index == 2 ? i++ : 0;
		tmp = tmp->next;
	}
	math = (int **)malloc(sizeof(int *) * (i + 1));
	i = 0;
	tmp = *ways;
	while (tmp)
	{
		if (tmp->index == 2)
		{
			math[i] = fill_math(&tmp->way, way_len(&tmp->way) + 1);
			i++;
		}
		tmp = tmp->next;
	}
	math[i] = NULL;
	print_func_an(math, ants, *in);
}
