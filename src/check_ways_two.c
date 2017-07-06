/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ways_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 18:48:25 by mponomar          #+#    #+#             */
/*   Updated: 2017/07/04 20:09:35 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int			boom(t_ways **ways)
{
	t_ways	*tmp;
	int		i;

	i = 0;
	tmp = *ways;
	while (tmp)
	{
		if (tmp->index == 2)
			i++;
		tmp = tmp->next;
	}
	return (i);
}

void		chenge_index(t_ways **ways, int where)
{
	int		i;
	t_ways	*tmp;

	tmp = *ways;
	i = 0;
	while (tmp)
	{
		if (tmp->index == 2)
			i++;
		if (where == i)
		{
			tmp->index = 0;
			return ;
		}
		tmp = tmp->next;
	}
}

int			yes_no(int *src, int *bla)
{
	int		i;
	int		k;
	int		yes;

	yes = 0;
	i = 0;
	while (src[i] != -1)
	{
		k = 0;
		while (bla[k] != -1)
		{
			src[i] == bla[k] ? yes++ : 0;
			k++;
		}
		i++;
	}
	return (yes > 2 ? 1 : 0);
}

void		correct_ways(t_ways **ways, int **math)
{
	int		i;
	int		k;

	i = 0;
	while (math[i] != NULL)
	{
		k = 1 + i;
		while (math[k] != NULL)
		{
			if ((yes_no(math[i], math[k])) == 1)
			{
				if (len_math(math[i]) > len_math(math[k]))
					chenge_index(ways, i);
				else
					chenge_index(ways, k);
			}
			k++;
		}
		i++;
	}
}

void		check_this_ways(t_ways **ways, int wow)
{
	t_ways	*tmp;
	int		**math;
	int		i;

	i = 0;
	math = (int **)malloc(sizeof(int *) * (wow + 1));
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
	correct_ways(ways, math);
	del_func_math_way(math);
}
