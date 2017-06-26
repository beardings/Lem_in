/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 14:32:37 by mponomar          #+#    #+#             */
/*   Updated: 2017/06/24 14:32:52 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int			main(void)
{
	char	*line;
	int		fd;
	t_map	*map;
	t_map	*tmp;

	map = create_map();
	line = NULL;
	tmp = map;
	fd = open("/nfs/2016/m/mponomar/project/git/Lem_in/test", O_RDONLY);
	while ((get_next_line(fd, &line)) > 0)
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
