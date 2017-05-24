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
        create_func.c)
add_executable(push_swap ${SOURCE_FILES})