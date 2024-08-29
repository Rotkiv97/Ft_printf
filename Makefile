# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 17:35:26 by vguidoni          #+#    #+#              #
#    Updated: 2022/10/24 10:28:32 by vguidoni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf

SRC = ft_gest_ft.c ft_gest_ft2.c ft_gest_ft3.c ft_lettura.c ft_printf.c \
   	ft_ricercha_arg.c ft_p.c
OBJ = $(SRC:.c=.o)

CC = gcc

CC_FLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CC_FLAGS} ${OBJ} -o ft_printf

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re

