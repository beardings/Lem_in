//
// Created by Mykola Ponomarov on 27.06.17.
//

#include "lem_in.h"

void	clean_room(t_ways **ways)
{

}

void	add_room(t_ways **ways, int i)
{

}

void	recursive(t_lem *lem, int st, t_ways **ways)
{
	int i;

	i = 1;
	while (i < lem->index)
	{
		if (lem->math[st][i])
		{
			if (i == lem->index)
			{
				add_room(ways, i);
				//
				clean_room(ways);
			}
			else if (!lem->visit[i])
			{
				lem->visit[i] = 1;
				add_room(ways, i);
				recursive(lem, i, ways);
				clean_room(ways);
				lem->visit[0] = 0;
			}
		}
		i++;
	}
}

void		algorithm(t_lem *lem, t_ways **ways, t_in **in)
{

	lem->visit = (int *)malloc(sizeof(int) * check_lstsize(in));
	ft_bzero(lem->visit, sizeof(int) * check_lstsize(in));
	lem->index = check_lstsize(in);
	lem->visit[0] = 1;
	recursive(lem, 1, ways);
}
