NAME	= libftprintf.a

LIBFT = Libft/libft.a

SRCS_PATH = ./Printf

SRCS	=	$(SRCS_PATH)/ft_printf.c \
			$(SRCS_PATH)/ft_arg_c.c \
			$(SRCS_PATH)/ft_arg_perc.c \
			$(SRCS_PATH)/ft_arg_s.c \

OBJ = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) -o $(OBJ) $(NAME) $(LIBFT)

$(OBJ): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

$(LIBFT):
	make -C Libft

clean:
	$(RM) $(OBJ) $(LIBFT)
	make -C Libft fclean

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re all clean fclean