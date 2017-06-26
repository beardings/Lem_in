/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yescom.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 14:42:50 by mponomar          #+#    #+#             */
/*   Updated: 2017/06/24 14:43:01 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"



int			yescom(int k, t_in **in, char *str)
{
	char	**room;
	int		i;
	t_in	*wow;

	wow = *in;
	i = 0;
	room = ft_strsplit(str, ' ');
	if (room[1] == NULL || room[3] != NULL)
	{
		ft_delroom(room);
		return (0);
	}
	create_f(&wow);
	while (room[i])
	{
		if (i == 0)
		{
			if (room[i][0] != 'L' || room[i][0] != '#')
			{
				wow->room = ft_strdup(room[i]);
				k == 1 ? wow->index = 1 : 0;
				k == 2 ? wow->index = 2 : 0;
				i++;
			}
			else
			{
				ft_delroom(room);
				return (0);
			}
		}
		else
		{
			if ((chint(room[i])) == 1 && check_coor(in, room[1], room[2]) == 1)
			{
				i == 1 ? wow->x = ft_atoi(room[i]) : 0;
				i == 2 ? wow->y = ft_atoi(room[i]) : 0;
				i++;
			}
			else
			{
				ft_delroom(room);
				return (0);
			}
		}
	}
	ft_delroom(room);
	return (i == 3 ? 1 : 0);
}