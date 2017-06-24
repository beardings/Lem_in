//
// Created by Mykola Ponomarov on 17.05.17.
//

#include "lem_in.h"

int main(void)
{
	char *line;
	int fd;
	t_map *map;
	t_map *tmp;

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