//
// Created by Mykola Ponomarov on 17.05.17.
//

#include "lem_in.h"

int main(void)
{
	char *line;
	int fd;
	t_lem *lemin;

	lemin = create_lemin();
	line = NULL;
	fd = open("/nfs/2016/m/mponomar/project/git/Lem_in/test", O_RDONLY);
	while ((get_next_line(fd, &line)) > 0)
	{
		if (!(lemin_valid(line, &lemin)))
		{
			printf("\033[0;31mERROR\033[0m\n");
			return (0);
		}
		free(line);
	}
	free(line);
	return (0);
}