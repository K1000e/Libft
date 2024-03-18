# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgorin <cgorin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 10:27:08 by cgorin            #+#    #+#              #
#    Updated: 2024/03/07 10:37:13 by cgorin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
DIR_SRC = ./srcs/
HEAD = ./includes/
SRC = $(DIR_SRC)*.c
OBJ =  $(SRC:.c=.o)
RM = rm -f

all : $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	 $(CC) $(CFLAGS)  -c $*.c -I$(HEAD) -o $*.o
	

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
	
.PHONY: all clean fclean re


