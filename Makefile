# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cqueiroz <cqueiroz@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/27 11:28:18 by cqueiroz          #+#    #+#              #
#    Updated: 2021/08/31 10:45:42 by cqueiroz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


FILES	= 	ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_isalnum.c

TAGS	= -Wall -Wextra -Werror

OBJS	= ${FILES:.c=.o}

NAME 	= libft.a

CC	= clang

$(NAME):
#cria os arquivos objetos (.0)
	gcc -I . ${TAGS} -c ${FILES}
	ar rcs ${NAME} ${OBJS}

all: NAME

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

teste: re
	gcc ${TAGS} main.c -L. -lft

.PHONY: all clean fclean re run
