//
// Created by Mykola Ponomarov on 03.07.17.
//

#include "lem_in.h"

void		cp_way(t_way **way, t_way *src)
{
	t_way	*tmp;

	while (src)
	{
		tmp = create_way();
		tmp->name = src->name;
		tmp->next = *way;
		*way = tmp;
		src= src->next;
	}
}

void		cr_ways(t_ways **ways, t_ways *ww, t_way *way)
{
	*ways = (t_ways *)malloc(sizeof(t_ways));
	(*ways)->way = NULL;
	(*ways)->len = 0;
	(*ways)->cross = NULL;
	(*ways)->index = 0;
	(*ways)->next = ww;
	cp_way(&(*ways)->way, way);
}