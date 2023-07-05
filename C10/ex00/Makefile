SRC_DIR	= ./srcs
INC_DIR	= ./

SRCS	= $(SRC_DIR)/ft_display_file.c

OBJS	= $(SRCS:.c=.o)

NAME	= ft_display_file

CC	= cc
CFLAGS	= -Wall -Wextra -Werror

AR	= ar rcs

RM	= rm -f

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
