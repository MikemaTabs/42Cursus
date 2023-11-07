NAME		= libftprintf.a

LIB_PATH 	= ./library
LIBFT 		= ./libft/libft.a
LIBFTPRINTF	= ${LIB_PATH}/ft_printf.h
LIBS 		= -lftprintf

CC 		= clang

FLAGS 		= -Wall -Werror -Wextra

REMOVE 		= rm -f
INCLUDE 	= -I ${LIB_PATH}

SRCS_PATH	= ./printf

SRCS		=	$(SRCS_PATH)/ft_printf.c \
				$(SRCS_PATH)/ft_arg_c.c \
				$(SRCS_PATH)/ft_arg_perc.c \
				$(SRCS_PATH)/ft_arg_s.c \
				$(SRCS_PATH)/ft_arg_d_i.c \
				$(SRCS_PATH)/ft_arg_u.c \
				$(SRCS_PATH)/ft_free_ptr.c \
				$(SRCS_PATH)/ft_hex_len.c \
				$(SRCS_PATH)/ft_decimal_len.c \
				$(SRCS_PATH)/ft_decimal_to_hex.c \
				$(SRCS_PATH)/ft_reverse_str.c \
				$(SRCS_PATH)/ft_arg_p.c \

OBJS		= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(LIBFT)
			ar -rcs $(NAME) $(OBJS)

$(LIBFT):
			make bonus -C Libft
			cp $(LIBFT) $(NAME)

.c.o:
			$(CC) -c ${FLAGS} $< -o ${<:.c=.o} ${INCLUDE}

clean:
			make clean -C Libft
			$(REMOVE) $(OBJS)

fclean:
			make fclean -C Libft
			$(REMOVE) $(OBJS)
			$(REMOVE) $(NAME)

re: fclean all

norm:
			norminette

.PHONY: re all clean fclean norm