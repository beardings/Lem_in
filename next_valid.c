//
// Created by Mykola Ponomarov on 24.06.17.
//

#include "lem_in.h"

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
