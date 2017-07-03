//
// Created by Mykola Ponomarov on 03.07.17.
//

#include "lem_in.h"

int			way_len(t_way **way)
{
	t_way	*tmp;
	int i;

	i = 0;
	tmp = *way;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i - 1);
}

int			ways_len(t_ways **ways)
{
	t_ways	*tmp;
	int i;

	i = 0;
	tmp = *ways;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

int			len_short_way(t_ways **ways)
{
	t_ways	*tmp;
	int		size_step;

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