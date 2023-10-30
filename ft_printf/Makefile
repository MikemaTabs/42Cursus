NAME	= libftprintf.a

SRCS	=	ft_word.c \
			ft_printf.c \

OBJ = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

LIBFT = Libft/libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) -o $(SRCS) $(NAME) $(LIBFT)

$(OBJ): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

$(LIBFT):
	make -C Libft
	mv Libft/libft.a libft.a

clean:
	$(RM) $(OBJ) $(LIBFT)
	make -C Libft clean

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re all clean fclean