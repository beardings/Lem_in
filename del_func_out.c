//
// Created by Mykola Ponomarov on 03.07.17.
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

void		ft_del_in(t_in **in)
{
	t_in	*wow;
	t_in	*pop;

	wow = *in;
	while (wow)
	{
		pop = wow;
		wow = wow->next;
		free(pop->room);
		free(pop);
	}
	*in = NULL;
	return ;
}