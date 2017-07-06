/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ants.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:09:45 by mponomar          #+#    #+#             */
/*   Updated: 2017/07/04 15:12:11 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void		get_index(t_in **in)
{
	t_in	*tmp;
	int		i;

	i = 0;
	tmp = *in;
	while (tmp)
	{
		tmp->index = i;
		i++;
		tmp = tmp->next;
	}
}

void		be_zero(int size, int **math, int i)
{
	int		k;

	k = 0;
	while (k < size)
	{
		math[i][k] = 0;
		k++;
	}
	math[i][k] = -1;
}

void		do_math_way(int size, t_ways **ways, t_in **in, int ants)
{
	int		**math;
	int		i;
	t_way	*tmp;

	i = 0;
	math = (int **)malloc(sizeof(int *) * 2);
	while (i < 1)
	{
		math[i] = (int *)malloc(sizeof(int) * size + 1);
		be_zero(size, math, i);
		i++;
	}
	math[i] = NULL;
	tmp = (*ways)->way;
	i = 0;
	while (tmp)
	{
		math[0][i] = tmp->name;
		i++;
		tmp = tmp->next;
	}
	print_func_an(math, ants, *in);
}

void		find_short(t_ways **ways, t_in **in, int ants)
{
	t_ways	*tmp;
	int		size;

	size = len_short_way(ways);
	tmp = *ways;
	while (tmp)
	{
		if (size == tmp->len)
		{
			do_math_way(size + 1, &tmp, in, ants);
			return ;
		}
		tmp = tmp->next;
	}
}

void		print_ants(int index, t_in **in, t_lem **lem, int size_step)
{
	get_index(in);
	if (index == 1)
		find_short(&(*lem)->ways, in, (*lem)->ants);
	else if (index == 2)
	{
		size_step -= 0;
		find_cross(&(*lem)->ways, in, (*lem)->ants);
	}
}
