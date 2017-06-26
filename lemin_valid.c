/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 14:32:23 by mponomar          #+#    #+#             */
/*   Updated: 2017/06/24 14:32:27 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int first(t_map **tmp, t_in **in, t_lem **lem)
{
	if ((it_command((*tmp)->str, in, tmp)) == 0)
	{
		ft_del_lem(lem, check_lstsize(in));
		ft_del_in(in);
		printf("\033[0;31mERROR\033[0m\n");
		return (0);
	}
	*tmp = (*tmp)->next;
	return (1);
}

int second(t_lem **lem, t_map **tmp, t_in **in)
{
	if ((next_valid(lem, in, tmp)) == 0)
	{
		ft_del_lem(lem, check_lstsize(in));
		ft_del_in(in);
		printf("\033[0;31mERROR\033[0m\n");
		return (0);
	}
	else
		*tmp = (*tmp)->next;
	return (1);
}

int err(t_in **in, t_lem **lem)
{
	if ((error(in, lem) == 0))
	{
		printf("\033[0;31mERROR\033[0m\n");
		ft_del_lem(lem, check_lstsize(in));
		ft_del_in(in);
		return (0);
	}
	return (1);
}

int firstnorm(t_map **tmp, t_lem **lem, t_in **in)
{
	if (it_comment((*tmp)->str) == 1)
		*tmp = (*tmp)->next;
	else if (it_comment((*tmp)->str) == 2)
	{
		if ((first(tmp, in, lem)) == 0)
			return (0);
	}
	else
	{
		if ((second(lem, tmp, in)) == 0)
			return (0);
	}
	return (1);
}

void lemin_valid(t_map **map)
{
	t_map *tmp;
	t_lem *lem;
	t_in *in;

	in = create_in();
	lem = create_lem();
	tmp = *map;
	while (tmp->next != NULL)
	{
		if ((firstnorm(&tmp, &lem, &in)) == 0)
			return ;
	}
	if ((err(&in, &lem)) == 0)
		return ;
	print_struct(map);
	printf("\n");
	put_out_math(lem->math, check_lstsize(&in));
	ft_del_lem(&lem, check_lstsize(&in));
	ft_del_in(&in);
}
