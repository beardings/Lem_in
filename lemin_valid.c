//
// Created by Mykola Ponomarov on 17.05.17.
//

#include "lem_in.h"

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