# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 14:20:03 by ndesprez          #+#    #+#              #
#    Updated: 2023/05/18 11:08:05 by ndesprez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES	= push.c\
swap.c\
error.c\
indexer.c\
lst_build.c\
main.c\
parser.c\
radix.c\
moves_a.c\
moves_b.c\
rev_rotate.c\
rotate.c\
split.c

NAME = push_swap

OBJECTS	= ${SOURCES:.c=.o}

FLAGS = -Wall -Wextra -Werror

${NAME} : ${OBJECTS}
		gcc $(FLAGS) $(OBJECTS) -o $(NAME)

all : ${NAME}

clean :
		rm -f ${OBJECTS}

fclean : clean
		rm -f ${NAME}

re : fclean all