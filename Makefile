NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
HEADER = libft.h

SRC = ft_isalpha.c\
	  ft_isdigit.c
OBJ = $(SRC:.c=.o)

RMF = rm -f

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

all: $(NAME)

%.o: $(HEADER) %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RMF) $(OBJ)

fclean: clean
	$(RMF) $(NAME)

re: fclean all

.PHONY: all clean fclean re
