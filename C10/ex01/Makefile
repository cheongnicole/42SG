SRC_DIR	= ./srcs
INC_DIR	= ./includes

SRCS	= $(SRC_DIR)/ft_cat.c \
	$(SRC_DIR)/ft_putstr.c \
	$(SRC_DIR)/ft_strcmp.c \
	$(SRC_DIR)/ft_strlen.c

OBJS	= $(SRCS:.c=.o)

NAME	= ft_cat

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
