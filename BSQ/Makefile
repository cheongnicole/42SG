# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncheong <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/10 10:29:14 by ncheong           #+#    #+#              #
#    Updated: 2023/07/10 10:42:03 by ncheong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR	= ./srcs
INC_DIR	= ./includes

SRCS	=	$(SRC_DIR)/main.c \
			$(SRC_DIR)/utils.c \
		   	$(SRC_DIR)/get_line.c \
			$(SRC_DIR)/make_tab.c \
			$(SRC_DIR)/resolv.c	\
			$(SRC_DIR)/first_line.c	\
			$(SRC_DIR)/get_full_line.c

OBJS	= $(SRCS:.c=.o)

NAME	= bsq

CC		= cc
CFLAGS	= -Wall -Wextra -Werror -g

RM		= rm -f

.c.o:
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:			fclean all
