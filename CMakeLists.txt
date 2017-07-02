cmake_minimum_required(VERSION 3.6)
project(Lem_in)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror")

set(SOURCE_FILES main.c
        lemin_valid.c
        check_maxint.c
        libft/libft/ft_strlen.c
        libft/libft/ft_strcmp.c
        libft/get_next_line/get_next_line.c
        libft/libft/ft_atoi.c
        libft/libft/ft_strjoin.c
        libft/libft/ft_strnew.c
        libft/libft/ft_strclr.c
        libft/libft/ft_strcat.c
        libft/libft/ft_strcpy.c
        libft/libft/ft_bzero.c
        libft/libft/ft_strchr.c
        libft/libft/ft_memset.c
        create_func.c
        libft/libft//ft_strdup.c
        libft/libft/ft_strsplit.c
        libft/libft/ft_hz.c
        libft/libft/ft_newsize.c
        libft/libft/ft_strsub.c
        libft/libft/ft_strncpy.c
        libft/libft/ft_strdel.c
        valid_func.c
        check_funcn.c
        del_func.c
        print.c
        check_func.c
        lem_valid_n.c
        yescom.c
        room.c
        next_valid.c
        change_list.c
        algorithm.c
        pars_ways.c
        out_put_ants.c
        print_ants.c)
add_executable(push_swap ${SOURCE_FILES})