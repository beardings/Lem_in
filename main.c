//
// Created by Mykola Ponomarov on 17.05.17.
//

#include "lem_in.h"

int main(int c, char **v)
{
    char *line;
    int fd;

    line = NULL;
    if (c == 2)
    {
        fd = open(v[1], O_RDONLY);
        while ((get_next_line(fd, &line)))
            lemin_valid(line);
        close(fd);
    }
    return (0);
}