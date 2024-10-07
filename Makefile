CC = cc
CFLAGS = -Wall -Wextra -Werror -O2 -I./include

SRC_DIR = src
VPATH = $(SRC_DIR)

SRC = ft_printf.c ft_printf_utils.c print_char.c print_hex.c print_integer.c print_percentage.c print_string.c print_pointer.c
OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

$(LIB_CMOCKA):
	make -C lib

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
