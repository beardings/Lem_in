/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_ways.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:08:34 by mponomar          #+#    #+#             */
/*   Updated: 2017/07/04 15:09:27 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int			it_cross(t_way **way, t_way **res)
{
	int		kol;
	t_way	*tmp;
	t_way	*dst;

	dst = *res;
	kol = 0;
	while (dst)
	{
		tmp = *way;
		while (tmp)
		{
			if (dst->name == tmp->name)
				kol++;
			tmp = tmp->next;
		}
		dst = dst->next;
	}
	return (kol > 2 ? 1 : 0);
}

void		pars_cross2(t_ways **ways, int i, t_ways **res)
{
	int		k;
	t_ways	*tmp;

	k = 0;
	tmp = *ways;
	while (tmp)
	{
		if (i == k)
		{
			tmp = tmp->next;
			k++;
		}
		else
		{
			if ((it_cross(&tmp->way, &(*res)->way)) == 1)
				(*res)->cross[k] = 1;
			k++;
			tmp = tmp->next;
		}
	}
}

void		pars_cross(t_ways **ways)
{
	t_ways	*tmp;
	t_ways	*res;
	int		i;

	i = 0;
	tmp = *ways;
	while (tmp)
	{
		res = tmp;
		pars_cross2(ways, i, &res);
		i++;
		tmp = tmp->next;
	}
}

void		pars_ways(t_ways **ways)
{
	t_ways	*tmp;

	tmp = *ways;
	while (tmp)
	{
		tmp->cross = (int*)malloc(sizeof(int) * ways_len(ways));
		ft_bzero(tmp->cross, sizeof(int) * ways_len(ways));
		tmp->len = way_len(&tmp->way);
		tmp = tmp->next;
	}
	pars_cross(ways);
}
