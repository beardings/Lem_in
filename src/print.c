/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 14:40:29 by mponomar          #+#    #+#             */
/*   Updated: 2017/07/04 18:53:04 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void		print_struct(t_map **map)
{
	t_map	*tmp;

	tmp = *map;
	while (tmp->next != NULL)
	{
		ft_printf("\033[0;32m%s\033[0m\n", tmp->str);
		tmp = tmp->next;
	}
}

int			len_math(int *src)
{
	int		i;

	i = 0;
	while (src[i] != -1)
		i++;
	return (i - 1);
}
