//
// Created by Mykola Ponomarov on 24.06.17.
//

#include "lem_in.h"

int check_link(t_map **tmp)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while ((*tmp)->str[i] != '\0')
	{
		(*tmp)->str[i] == '-' ? k++ : 0;
		i++;
	}
	if (k == 1)
		return (1);
	return (0);
}

int check_st_en(t_in **in)
{
	t_in *tmp;
	int i;

	i = 0;
	tmp = *in;
	while (tmp)
	{
		if (tmp->index == 1)
			i++;
		if (tmp->index == 2)
			i++;
		tmp = tmp->next;
	}
	if (i == 2)
		return (1);
	return (0);
}

int	check_name(char *str, t_in **in)
{
	int i;
	t_in *tmp;

	i = 0;
	tmp = *in;
	while (tmp)
	{
		if (!(ft_strcmp(tmp->room, str)))
			i++;
		tmp = tmp->next;
	}
	if (i == 1)
		return (1);
	else
		return (0);
}

int			check_lstsize(t_in **lst)
{
	t_in	*tmp;
	int		i;

	i = 0;
	tmp = *lst;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

int check_coor(t_in **in, char *str1, char *str2)
{
	t_in *tmp;
	int k;

	k = 0;
	tmp = *in;
	while (tmp)
	{
		if (tmp->x == ft_atoi(str1) && tmp->y == ft_atoi(str2))
			k++;
		tmp = tmp->next;
	}
	if (k <= 1)
		return (1);
	return (0);

}