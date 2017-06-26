/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 14:40:29 by mponomar          #+#    #+#             */
/*   Updated: 2017/06/24 14:40:49 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void		print_struct(t_map **map)
{
	t_map	*tmp;

	tmp = *map;
	while (tmp->next != NULL)
	{
		printf("%s\n", tmp->str);
		tmp = tmp->next;
	}
}

void		put_out_math(int **math, int len)
{
	int		i;
	int		k;

	i = 0;
	while (i < len + 2)
	{
		k = 0;
		while (k < len + 2)
		{
			if (i == 0)
			{
				if (k < len + 1)
					printf("\033[0;35m%d\033[0m ", math[i][k]);
				if (k == len + 1)
					printf("\033[0;36m%d\033[0m ", math[i][k]);
			}
			else if (k == len + 1)
			{
				if (i < len + 1)
					printf("\033[0;36m%d\033[0m ", math[i][k]);
				if (i == len + 1)
					printf("\033[0;36m%d\033[0m ", math[i][k]);
			}
			else
			{
				if (k == 0 && i < len + 1)
					printf("\033[0;35m%d\033[0m ", math[i][k]);
				else if (i == len + 1 && k < len + 1)
					printf("\033[0;36m%d\033[0m ", math[i][k]);
				else
					printf("\033[0;34m%d\033[0m ", math[i][k]);
			}
			k++;
		}
		printf("\n");
		i++;
	}
}
