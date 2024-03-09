# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelna <mabdelna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 20:07:31 by mabdelna          #+#    #+#              #
#    Updated: 2024/03/09 11:56:31 by mabdelna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror $(INCLUDE)
INCLUDE = -I./include
RM = rm -rf

NAME = push_swap

SRCS = $(wildcard src/*.c utils/*.c)
OBJS = $(SRCS:.c=.o)

all: ${NAME} ${CHECK}
${NAME}: ${OBJS}
	@${CC} ${CFLAGS} ${OBJS} -o ${NAME}


clean: 
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re