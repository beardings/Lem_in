/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_an_func.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:06:37 by mponomar          #+#    #+#             */
/*   Updated: 2017/07/04 15:53:24 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int			check(int status, int *road)
{
	int		i;

	i = 1;
	while (road[i] != -1)
	{
		if (status == road[i])
			return (road[i + 1]);
		i++;
	}
	return (-1);
}

char		*find_ide(int ide, t_in *in)
{
	while (in != NULL)
	{
		if (in->index == ide)
			return (in->room);
		in = in->next;
	}
	return (NULL);
}

int			*create_status(int ants)
{
	int		*status;
	int		index;

	index = 0;
	status = (int *)malloc(sizeof(int) * (ants + 1));
	while (index < ants)
		status[index++] = -1;
	status[index] = -3;
	return (status);
}

void		print_l(int index, int *status, int check, t_in *in)
{
	int		finish;

	finish = check_lstsize(&in) - 1;
	ft_printf("\033[0;35mL\033[0m");
	ft_printf("\033[0;35m%d\033[0m", index + 1);
	ft_printf("\033[0;35m-\033[0m");
	ft_printf("\033[0;35m%s\033[0m", (find_ide(check, in)));
	ft_printf(" ");
	if (check == finish)
		status[index] = -2;
	else
		status[index] = check;
}

void		print_func_an(int **math, int ants, t_in *in)
{
	int		*status;
	int		index;
	int		i;

	status = create_status(ants);
	while (status[ants - 1] != -2)
	{
		i = 0;
		while (math[i] != NULL)
		{
			index = 0;
			while (status[index] != -1 && status[index] != -3)
			{
				if (check(status[index], math[i]) >= 0)
					print_l(index, status, check(status[index], math[i]), in);
				index++;
			}
			if (status[index] == -1)
				print_l(index, status, math[i][1], in);
			i++;
		}
		ft_printf("\n");
	}
	free(status);
	del_func_math_way(math);
}
