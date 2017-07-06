/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 14:32:37 by mponomar          #+#    #+#             */
/*   Updated: 2017/07/04 19:40:40 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int			main(void)
{
	char	*line;
	t_map	*map;
	t_map	*tmp;

	map = create_map();
	line = NULL;
	tmp = map;
	while ((get_next_line(0, &line)) > 0)
	{
		map->str = ft_strdup(line);
		map->next = create_map();
		map = map->next;
		free(line);
	}
	map = tmp;
	lemin_valid(&map);
	free(line);
	ft_del_map(&map);
	return (0);
}
