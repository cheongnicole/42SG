# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/13 06:21:03 by ncheong           #+#    #+#              #
#    Updated: 2023/07/13 14:25:27 by ncheong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR = ./srcs
INC_DIR = ./includes

SRCS = $(SRC_DIR)/ft_create_elem.c \
	$(SRC_DIR)/ft_list_main.c \
	$(SRC_DIR)/ft_utils.c \
	$(SRC_DIR)/ft_list_push_front.c \
	$(SRC_DIR)/ft_list_size.c \
	$(SRC_DIR)/ft_list_last.c \
	$(SRC_DIR)/ft_list_push_back.c \
	$(SRC_DIR)/ft_list_push_strs.c \
	$(SRC_DIR)/ft_list_clear.c \
	$(SRC_DIR)/ft_list_at.c \
	$(SRC_DIR)/ft_list_reverse.c \
	$(SRC_DIR)/ft_list_foreach.c \
	$(SRC_DIR)/ft_list_foreach_if.c \
	$(SRC_DIR)/ft_list_find.c \
	$(SRC_DIR)/ft_list_remove_if.c \
	$(SRC_DIR)/ft_list_merge.c \
	# $(SRC_DIR)/ft_list_sort.c \
	# $(SRC_DIR)/ft_list_reverse_fun.c \
	# $(SRC_DIR)/ft_sorted_list_insert.c \
	# $(SRC_DIR)/ft_sorted_list_merge.c

OBJS = $(SRCS:.c=.o)

NAME = ft_list

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

.c.o:
	$(CC) $(CLAGS) -I $(INC_DIR) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CLAGS) $^ -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)
