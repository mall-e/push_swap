NAME = push_swap
FILES = $(shell find ./pswap -name "*.c")
CFLAGS = -Wall -Wextra
CC = gcc
OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): ${OBJ}
	$(CC) $(CFLAGS) ${OBJ} -o $(NAME)

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: clean fclean all
