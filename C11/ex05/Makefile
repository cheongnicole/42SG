# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/05 18:21:56 by ncheong           #+#    #+#              #
#    Updated: 2023/07/06 06:50:19 by ncheong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR	= ./srcs
INC_DIR	= ./includes

SRCS	= $(SRC_DIR)/do-op.c \
	$(SRC_DIR)/ft_ops.c \
	$(SRC_DIR)/ft_strcmp.c \
	$(SRC_DIR)/ft_putstr.c \
	$(SRC_DIR)/ft_atoi.c \
	$(SRC_DIR)/ft_putlnbr.c \
	$(SRC_DIR)/ft_putchar.c

OBJS	= $(SRCS:.c=.o)

NAME	= do-op

CC	= cc
CFLAGS	= -Wall -Wextra -Werror

AR	= ar rcs

RM	= rm -f

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
