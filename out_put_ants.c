//
// Created by Mykola Ponomarov on 02.07.17.
//

#include "lem_in.h"

int		len_short_way(t_ways **ways)
{
	t_ways *tmp;
	int size_step;

	tmp = *ways;
	size_step = tmp->len;
	while (tmp)
	{
		if (size_step > tmp->len)
			size_step = tmp->len;
		tmp = tmp->next;
	}
	return (size_step);
}

int		bust_way(t_ways **ways, int i)
{
	t_ways *tmp;
	int k;

	k = 0;
	tmp = *ways;
	while (k < i)
	{
		k++;
		tmp = tmp->next;
	}
	tmp->index = 2;
	return (tmp->len);
}

int		need_step(t_ways **ways, t_ways *src, int len)
{
	int i;
	int step;

	step = 0;
	i = 0;
	while (i < len)
	{
		if (src->cross[i] == 0)
			step += bust_way(ways, i + 1);
		i++;
	}
	return (step);
}

int		get_step(t_ways **ways, int zero)
{
	int i;
	t_ways *tmp;
	int len;
	int size;
	int step;

	len = ways_len(ways);
	tmp = *ways;
	while (tmp)
	{
		size = 0;
		i = 0;
		while (i < len)
		{
			if (tmp->cross[i] == 0)
				size++;
			i++;
		}
		if (size == zero)
		{
			step = need_step(ways, tmp, len);
			return (step);
		}
		tmp = tmp->next;
	}
	return (0);
}

void 	check_size_ways(t_ways **ways, int *size_ways)
{
	int zero;
	t_ways *tmp;
	int i;
	int len;

	zero = 0;
	len = ways_len(ways);
	tmp = *ways;
	while (tmp)
	{
		i = 0;
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

void	out_put(t_lem **lem, t_in **in)
{
	int size_ways;
	int len_step;
	int size_step;
	int index;

	size_step = (((*lem)->ants/1) * ((len_short_way(&(*lem)->ways))/1));
	index = 1;
	size_ways = 0;
	check_size_ways(&(*lem)->ways, &size_ways);
	len_step = get_step(&(*lem)->ways, size_ways);
	if (size_step < (((*lem)->ants/size_ways) * len_step/size_ways))
	{
		size_step = (((*lem)->ants/size_ways) * len_step/size_ways);
		index = 2;
	}
	print_ants(index, in, lem, size_step);
}