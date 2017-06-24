//
// Created by Mykola Ponomarov on 17.05.17.
//

#include "lem_in.h"

int yescom(int k, t_in **in, char *str)
{
	char **room;
	int i;
	t_in *wow;

	wow = *in;
	i = 0;
	room = ft_strsplit(str, ' ');
	if (room[1] == NULL || room[3] != NULL)
	{
		ft_delroom(room);
		return (0);
	}
	while (wow->room != NULL)
	{
		wow->next == NULL ? wow->next = create_in() : 0;
		wow = wow->next;
	}
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
	if (i == 3)
		return (1);
	return (0);
}


int it_room(t_in **in, t_map **tmp)
{
	char **room;
	int i;
	t_in *wow;

	wow = *in;
	i = 0;
	room = ft_strsplit((*tmp)->str, ' ');
	if (room[1] == NULL || room[3] != NULL)
	{
		ft_delroom(room);
		return (0);
	}
	while (wow->room != NULL)
	{
		wow->next == NULL ? wow->next = create_in() : 0;
		wow = wow->next;
	}
	while (room[i])
	{
		if (i == 0)
		{
			if (room[i][0] != 'L' || room[i][0] != '#')
			{
				wow->room = ft_strdup(room[i]);
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
	if (i == 3)
		return (1);
	return (0);
}

int	next_valid(t_lem **lem, t_in **in, t_map **tmp)
{
	if ((*lem)->ants == -1 && (check_st_en(in)) == 0)
	{
		if ((it_numants((*tmp)->str, lem)) == 1)
			return (1);
		else
			return (0);
	}
	else if ((*lem)->ants > -1 && (check_space((*tmp)->str)) == 1 && (it_room(in, tmp) == 1))
		return (1);
	else if ((check_st_en(in)) == 1 && next_link(tmp) == 1)
	{
		if ((check_link(tmp)) == 1 && (valid_link(in, lem, tmp)) == 1)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}

int error(t_in **in, t_lem **lem)
{
	if ((*lem)->math == NULL || (*lem)->ants == -1 || *in == NULL)
		return (0);
	else
		return (1);
}

void lemin_valid(t_map **map)
{
	t_map *tmp;
	t_lem *lem;
	t_in *in;

	in = create_in();
	lem = create_lem();
	tmp = *map;
	while (tmp->next != NULL)
	{
		if (it_comment(tmp->str) == 1)
			tmp = tmp->next;
		else if (it_comment(tmp->str) == 2)
		{
			if ((it_command(tmp->str, &in, &tmp)) == 0)
			{
				ft_del_lem(&lem, check_lstsize(&in));
				ft_del_in(&in);
				printf("\033[0;31mERROR\033[0m\n");
				return ;
			}
			tmp = tmp->next;
		}
		else
		{
			if ((next_valid(&lem, &in, &tmp)) == 0)
			{
				ft_del_lem(&lem, check_lstsize(&in));
				ft_del_in(&in);
				printf("\033[0;31mERROR\033[0m\n");
				return ;
			}
			else
				tmp = tmp->next;
		}
	}
	if ((error(&in, &lem) == 0))
	{
		printf("\033[0;31mERROR\033[0m\n");
		ft_del_lem(&lem, check_lstsize(&in));
		ft_del_in(&in);
		return ;
	}
	print_struct(map);
	printf("\n");
	put_out_math(lem->math, check_lstsize(&in));
	ft_del_lem(&lem, check_lstsize(&in));
	ft_del_in(&in);
}
