NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
ar = ar rcs

SRC = .c
OBJ = $(SRC:.c=.o)

RMF = rm -f

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RMF) $(OBJ)

fclean: clean
	$(RMF) $(NAME)

re: fclean all

.PHONY: all clean fclean re
