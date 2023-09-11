NAME = libft.a

SRCS = ft_isalpha.c \

OBJ = $(SRCS:.c=.o)
OBJ_BONUS = $(SOURCE_BONUS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIB = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

$(OBJ): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: $(OBJ) $(OBJ_BONUS)
	$(LIB) $(NAME) $(OBJ) $(OBJ_BONUS)

.PHONY: re all clean fclean bonus