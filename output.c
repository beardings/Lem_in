//
// Created by Mykola Ponomarov on 01.07.17.
//

#include "lem_in.h"

int		way_len(t_way **way)
{
	t_way *tmp;
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

void	pars_cross(t_ways **ways)
{
	t_ways *tmp;
	t_ways *res;

	tmp = *ways;
}


void	pars_ways(t_ways **ways)
{
	t_ways *tmp;

	tmp  = *ways;
	while (tmp)
	{
		tmp->len = way_len(&tmp->way);
		tmp = tmp->next;
	}
	pars_cross(ways);
}