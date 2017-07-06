#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mponomar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/10 19:59:21 by mponomar          #+#    #+#              #
#    Updated: 2017/07/04 15:52:53 by mponomar         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = lem-in

CC = gcc
FLAGS = -Wall -Wextra -Werror

SRC = src/
INC = includes/
LIBFT = libft/
FT_INC = $(LIBFT)/includes

L_CMP =	main.o \
		algorithm.o \
		change_list.o \
		check_func.o \
		check_funcn.o \
		check_maxint.o \
		create_func.o \
		del_func.o \
		del_func_out.o \
		func_for_ways.o \
		lem_valid_n.o \
		lemin_valid.o \
		next_valid.o \
		out_put_ants.o \
		pars_len_func.o \
		pars_ways.o \
		print.o \
		print_an_func.o \
		print_ants.o \
		print_ants_cross.o \
		room.o \
		valid_func.o \
		yescom.o \
		check_ways_two.o

all: $(NAME)

$(NAME): $(L_CMP)
	@make -C $(LIBFT)
	@$(CC) $(FLAGS) -o $(NAME) -L $(LIBFT) -lft $(L_CMP)
	@echo "made" $(NAME)

$(L_CMP): %.o: $(SRC)%.c
	@$(CC) -c $(FLAGS) -I $(FT_INC) -I $(INC) $< -o $@

clean:
	@-/bin/rm -f $(L_CMP)
	@-make clean -C $(LIBFT)
	@echo "cleaned" $(NAME)

fclean: clean
	@-/bin/rm -f $(NAME)
	@-make fclean -C $(LIBFT)
	@echo "fcleaned" $(NAME)

re: fclean all

rmf:
	rm *~
	rm \#*
	rm *.out