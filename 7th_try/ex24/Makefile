NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs
SRC_HEAD = includes

SRC_FILES = ft_putchar.c\
			ft_putstr.c\
			ft_strcmp.c\
			ft_strlen.c\
			ft_swap.c

OBJ_FILES = $(SRC_FILES:.c=.o)
SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILES))

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all
