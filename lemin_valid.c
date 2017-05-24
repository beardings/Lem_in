//
// Created by Mykola Ponomarov on 17.05.17.
//

#include "lem_in.h"

int it_command(char *str, t_lem **lemin)
{
	if (!(ft_strcmp(str, "##end")))
	{
		(*lemin)->end = 'L';
		return (1);
	}
	else if (!(ft_strcmp(str, "##start")))
	{
		(*lemin)->start = 'L';
		return (1);
	}
	else
		return (0);
}

int it_comment(char *str)
{
	if (!(ft_strcmp(str, "##end")) || !(ft_strcmp(str, "##start")))
		return (0);
	if (str[0] == '#')
		return (1);
	else
		return (0);
}

int it_numants(char *str, t_lem **lemin)
{
	int i;
	int len;

	i = 0;
	len = (int)ft_strlen(str);
	while (str[i] > 47 && str[i] < 58)
		i++;
	if (len == i)
		if ((check_maxint(str)) == 1)
		{
			(*lemin)->ants = ft_atoi(str);
			return (1);
		}
		else
			return (0);
	else
		return (0);
}

/*int it_rooms(char *str, t_lem **lemin)
{

}*/

int lemin_valid(char *str, t_lem **lemin)
{
	if ((it_comment(str)) == 1)
		return (1);
	if ((it_numants(str, lemin)) == 1)
		return (1);
	if ((it_command(str, lemin)) == 1)
		return (1);
/*	if ()
		return (1);*/

	return (0);
}