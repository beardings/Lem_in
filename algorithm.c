//
// Created by Mykola Ponomarov on 27.06.17.
//

#include "lem_in.h"

void 	cp_way(t_way **way, t_way *src)
{
	t_way *tmp;

	while (src)
	{
		tmp = create_way();
		tmp->name = src->name;
		tmp->next = *way;
		*way = tmp;
		src= src->next;
	}
}

void	cr_ways(t_ways **ways, t_ways *ww, t_way *way)
{
	*ways = (t_ways *)malloc(sizeof(t_ways));
	(*ways)->way = NULL;
	(*ways)->len = 0;
	(*ways)->cross = NULL;
	(*ways)->index = 0;
	(*ways)->next = ww;
	cp_way(&(*ways)->way, way);
}

void	add_ways(t_lem *lem, t_way *way)
{
	t_ways *tmp;

	if (lem->ways == NULL)
		return (cr_ways(&lem->ways, NULL, way));
	tmp = lem->ways;
	while (tmp->next)
		tmp = tmp->next;
	cr_ways(&tmp->next, tmp->next, way);
}

void	clean_room(t_way **way)
{
	t_way *tmp;

	tmp = (*way)->next;
	free(*way);
	*way = tmp;
}

void	add_room(t_way **way, int i)
{
	t_way *tmp;

	tmp = create_way();
	tmp->name = i;
	tmp->next = *way;
	*way = tmp;
}

void	recursive(t_lem *lem, int st, t_way **way, int len)
{
	int i;

	i = 1;
	while (i - 1 < lem->index)
	{
		if (lem->math[st][i] == 1)
		{
			if (i == lem->index)
			{
				add_room(way, i - 1);
				add_ways(lem, *way);
				clean_room(way);
			}
			else if (!lem->visit[i - 1])
			{
				lem->visit[i - 1] = 1;
				add_room(way, i - 1);
				recursive(lem, i, way, len + 1);
				clean_room(way);
				lem->visit[i - 1] = 0;
			}
		}
		i++;
	}
}

int		algorithm(t_lem *lem, t_way **way, t_in **in)
{
	lem->visit = (int *)malloc(sizeof(int) * check_lstsize(in));
	ft_bzero(lem->visit, sizeof(int) * check_lstsize(in));
	lem->index = check_lstsize(in);
	lem->visit[0] = 1;
	recursive(lem, 1, way, 1);
	free(*way);
	if (lem->ways == NULL)
	{
		printf("\033[0;31mERROR\033[0m\n");
		return (0);
	}
	pars_ways(&lem->ways);
	out_put(&lem, in);
	return (1);
}
