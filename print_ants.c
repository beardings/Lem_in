//
// Created by Mykola Ponomarov on 02.07.17.
//

#include "lem_in.h"

void		del_func_math_way(int **math)
{
	int		i;

	i = 0;
	while (math[i] != NULL)
	{
		free(math[i]);
		i++;
	}
	free(math);
}

void		get_index(t_in **in)
{
	t_in	*tmp;
	int i;

	i = 0;
	tmp = *in;
	while (tmp)
	{
		tmp->index = i;
		i++;
		tmp = tmp->next;
	}
}

void		do_math_way(int size, t_ways **ways, t_in **in, int ants)
{
	int		**math;
	int		i;
	t_way	*tmp;
	int		k;

	i = 0;
	math = (int **)malloc(sizeof(int *) * 2);
	while (i < 1)
	{
		math[i] = (int *)malloc(sizeof(int) * size + 1);
		k = 0;
		while (k < size)
		{
			math[i][k] = 0;
			k++;
		}
		math[i][k] = -1;
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
			do_math_way(size + 1, &tmp, in, ants);
		tmp = tmp->next;
	}
}

void		print_ants(int index, t_in **in, t_lem **lem, int size_step)
{
	get_index(in);
	if (index == 1)
		find_short(&(*lem)->ways, in, (*lem)->ants);
	size_step -=1;
}