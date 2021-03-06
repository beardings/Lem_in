/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   out_put_ants.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 14:53:30 by mponomar          #+#    #+#             */
/*   Updated: 2017/07/04 18:47:55 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int			bust_way(t_ways **ways, int i)
{
	t_ways	*tmp;
	int		k;
	int		len;

	k = 0;
	len = 0;
	tmp = *ways;
	while (k < i)
	{
		k++;
		tmp = tmp->next;
	}
	if (k == i)
	{
		tmp->index = 2;
		len = tmp->len;
	}
	return (len);
}

int			need_step(t_ways **ways, t_ways *src, int len)
{
	int		i;
	int		step;

	step = 0;
	i = 0;
	while (i < len)
	{
		if (src->cross[i] == 0)
			step += bust_way(ways, i);
		i++;
	}
	return (step);
}

int			get_step(t_ways **ways, int zero)
{
	int		i;
	t_ways	*tmp;
	int		size;
	int		step;

	step = 0;
	tmp = *ways;
	while (tmp)
	{
		size = 0;
		i = 0;
		while (i < ways_len(ways))
		{
			tmp->cross[i] == 0 ? size++ : 0;
			i++;
		}
		if (size == zero)
		{
			step += need_step(ways, tmp, ways_len(ways));
			check_this_ways(ways, boom(ways));
			return (step);
		}
		tmp = tmp->next;
	}
	return (0);
}

void		check_size_ways(t_ways **ways, int *size_ways)
{
	int		zero;
	t_ways	*tmp;
	int		i;
	int		len;

	len = ways_len(ways);
	tmp = *ways;
	while (tmp)
	{
		i = 0;
		zero = 0;
		while (i < len)
		{
			if (tmp->cross[i] == 0)
				zero++;
			i++;
		}
		*size_ways == 0 ? *size_ways = zero : 0;
		*size_ways < zero ? *size_ways = zero : 0;
		tmp = tmp->next;
	}
}

void		out_put(t_lem **lem, t_in **in)
{
	int		size_ways;
	int		len_step;
	int		size_step;
	int		index;
	int		wow;

	size_step = (((*lem)->ants / 1) * ((len_short_way(&(*lem)->ways)) / 1));
	index = 1;
	size_ways = 0;
	check_size_ways(&(*lem)->ways, &size_ways);
	len_step = get_step(&(*lem)->ways, size_ways);
	wow = ((*lem)->ants / size_ways) * len_step / size_ways;
	if (size_step >= wow)
	{
		size_step = (((*lem)->ants / size_ways) * len_step / size_ways);
		index = 2;
	}
	print_ants(index, in, lem, size_step);
}
