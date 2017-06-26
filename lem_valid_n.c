/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_valid_n.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 14:31:24 by mponomar          #+#    #+#             */
/*   Updated: 2017/06/24 14:31:26 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int valid_link(t_in **in, t_lem **lem, t_map **tmp)
{
	char **link;
	int i;
	int len_m;
	int **math;

	len_m = check_lstsize(in);
	i = 0;
	link = ft_strsplit((*tmp)->str, '-');
	if (link[2] != NULL || link[1] == NULL)
	{
		while (link[i])
		{
			free(link[i]);
			i++;
		}
		free(link);
		return (0);
	}
	if ((check_name(link[0], in)) == 1 && (check_name(link[1], in)) == 1)
	{
		(*lem)->index < 2 ? math = create_math(len_m) : 0;
		(*lem)->index < 2 ? put_st_en(math, in, len_m) : 0;
		if ((*lem)->index < 2)
		{
			put_link(link[0], link[1], math, in);
			(*lem)->index = 1;
		}
		else
			put_link(link[0], link[1], (*lem)->math, in);
		if ((*lem)->index == 1)
		{
			(*lem)->math = math;
			(*lem)->index = 2;
		}
		free(link[0]);
		free(link[1]);
		free(link);
		return (1);
	}
	free(link[0]);
	free(link[1]);
	free(link);
	return (0);
}
