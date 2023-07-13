# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/13 06:21:03 by ncheong           #+#    #+#              #
#    Updated: 2023/07/13 21:25:05 by ncheong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR = ./srcs
INC_DIR = ./includes

SRCS = $(SRC_DIR)/btree_create_node.c \
	$(SRC_DIR)/btree_insert_node.c \
	$(SRC_DIR)/btree_main.c \
	$(SRC_DIR)/btree_apply.c \
	# $(SRC_DIR)/btree_insert_data.c \
	# $(SRC_DIR)/btree_search_item.c \
	# $(SRC_DIR)/btree_level_count.c \
	# $(SRC_DIR)/btree_apply_by_level.c \

OBJS = $(SRCS:.c=.o)

NAME = ft_btree

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

.c.o:
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)
