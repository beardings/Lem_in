/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 14:29:32 by mponomar          #+#    #+#             */
/*   Updated: 2017/07/04 18:54:43 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include "../libft/header/libft.h"
# include "../libft/header/ft_printf.h"
# include "../libft/header/get_next_line.h"
# include <limits.h>

typedef struct		s_way
{
	int				name;
	struct s_way	*next;
}					t_way;

typedef struct		s_ways
{
	t_way			*way;
	int				len;
	int				*cross;
	int				index;
	struct s_ways	*next;
}					t_ways;

typedef	struct		s_map
{
	char			*str;
	struct s_map	*next;
}					t_map;

typedef struct		s_lem
{
	int				ants;
	int				**math;
	int				index;
	int				*visit;
	t_ways			*ways;
}					t_lem;

typedef struct		s_in
{
	char			*room;
	int				index;
	int				x;
	int				y;
	struct s_in		*next;
}					t_in;

void				lemin_valid(t_map **map);
int					check_maxint(char *str);
t_map				*create_map(void);
t_lem				*create_lem(void);
t_in				*create_in(void);
void				print_struct(t_map **map);
int					check_lstsize(t_in **lst);
int					check_st_en(t_in **in);
int					**create_math(int len);
void				put_out_math(int **math, int len);
int					valid_link(t_in **in, t_lem **lem, t_map **tmp);
int					next_link(t_map **tmp);
int					check_link(t_map **tmp);
int					check_coor(t_in **in, char *str1, char *str2);
void				ft_del_in(t_in **in);
void				ft_del_lem(t_lem **lem, int len);
void				ft_delroom(char **room);
int					check_name(char *str, t_in **in);
void				put_link(char *str1, char *str2, int **math, t_in **in);
void				put_st_en(int **math, t_in **in, int len);
void				ft_del_map(t_map **head);
int					chint(char *str);
int					check_sp(char *str);
int					it_numants(char *str, t_lem **lem);
int					it_command(char *str, t_in **in, t_map **tmp);
int					it_comment(char *str);
int					yescom(int k, t_in **in, char *str);
int					it_room(t_in **in, t_map **tmp);
int					next_valid(t_lem **lem, t_in **in, t_map **tmp);
int					error(t_in **in, t_lem **lem);
void				create_f(t_in **wow);
void				chen_st_en(t_in **in);
t_way				*create_way(void);
void				algorithm(t_lem *lem, t_way **way, t_in **in, t_map **map);
void				chenge_st(t_in **in);
void				chenge_en(t_in **in);
void				pars_ways(t_ways **ways);
void				out_put(t_lem **lem, t_in **in);
int					ways_len(t_ways **ways);
void				print_ants(int index, t_in **in, t_lem **lem,
						int size_step);
int					len_short_way(t_ways **ways);
void				print_func_an(int **math, int ants, t_in *in);
void				del_func_math_way(int **math);
void				cr_ways(t_ways **ways, t_ways *ww, t_way *way);
int					way_len(t_way **way);
void				find_cross(t_ways **ways, t_in **in, int ants);
void				be_zero(int size, int **math, int i);
void				check_this_ways(t_ways **ways, int wow);
int					boom(t_ways **ways);
int					*fill_math(t_way **way, int len);
int					len_math(int *src);

#endif
