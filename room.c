/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   room.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 14:41:11 by mponomar          #+#    #+#             */
/*   Updated: 2017/06/27 16:22:36 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void		create_f(t_in **wow)
{
	while ((*wow)->room != NULL)
	{
		(*wow)->next == NULL ? (*wow)->next = create_in() : 0;
		*wow = (*wow)->next;
	}
}

int			it_ro(char **room, int *i, t_in **wow)
{
	if (room[*i][0] != 'L' || room[*i][0] != '#')
	{
		(*wow)->room = ft_strdup(room[*i]);
		(*i)++;
		return (1);
	}
	else
	{
		ft_delroom(room);
		return (0);
	}
}

int			it_roo(char **room, int *i, t_in **wow, t_in **in)
{
	if ((chint(room[*i])) == 1 && check_coor(in, room[1], room[2]) == 1)
	{
		*i == 1 ? (*wow)->x = ft_atoi(room[*i]) : 0;
		*i == 2 ? (*wow)->y = ft_atoi(room[*i]) : 0;
		(*i)++;
		return (1);
	}
	else
	{
		ft_delroom(room);
		return (0);
	}
}

int			check_room(char **room, int *i, t_in **wow, t_in **in)
{
	if (*i == 0)
	{
		if ((it_ro(room, i, wow)) == 0)
			return (0);
	}
	else
	{
		if ((it_roo(room, i, wow, in)) == 0)
			return (0);
	}
	return (1);
}

int			it_room(t_in **in, t_map **tmp)
{
	char	**room;
	int		i;
	t_in	*wow;

	wow = *in;
	i = 0;
	room = ft_strsplit((*tmp)->str, ' ');
	if (room[1] == NULL || room[3] != NULL)
	{
		ft_delroom(room);
		return (0);
	}
	create_f(&wow);
	while (room[i])
	{
		if ((check_room(room, &i, &wow, in)) == 0)
			return (0);
	}
	ft_delroom(room);
	return (i == 3 ? 1 : 0);
}
