//
// Created by Mykola Ponomarov on 29.06.17.
//

#include "lem_in.h"

void		chenge_en(t_in **in)
{
	t_in	*tmp;
	t_in	*res;
	t_in	*wow;

	tmp = *in;
	while (tmp->next->index != 2)
		tmp = tmp->next;
	if (tmp->next->next == NULL)
		return ;
	else
	{
		res = tmp;
		res = res->next;
		tmp->next = NULL;
		wow = res->next;
		res->next = NULL;
		tmp->next = wow;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = res;
	}
}

void		chenge_st(t_in **in)
{
	t_in	*tmp;
	t_in	*res;
	t_in	*wow;

	tmp = *in;
	if (tmp->index == 1)
		return ;
	while (tmp->next->index != 1)
		tmp = tmp->next;
	res = tmp;
	res = res->next;
	tmp->next = NULL;
	if (res->next == NULL)
	{
		res->next = *in;
		*in = res;
	}
	else
	{
		wow = res->next;
		tmp->next = wow;
		res->next = *in;
		*in = res;
	}
}