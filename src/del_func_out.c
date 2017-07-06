/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_func_out.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:04:11 by mponomar          #+#    #+#             */
/*   Updated: 2017/07/04 15:04:15 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void		del_func_math_way(int **math)
{
	int		i;

	i = 0;
	while (math[i] != NULL)
	{
		free(math[i]);
		i++;
	}
	free(math);
}

void		ft_del_in(t_in **in)
{
	t_in	*wow;
	t_in	*pop;

	wow = *in;
	while (wow)
	{
		pop = wow;
		wow = wow->next;
		free(pop->room);
		free(pop);
	}
	*in = NULL;
	return ;
}
