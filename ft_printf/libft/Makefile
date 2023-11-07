NAME			= libft.a

LIB_PATH 		= ../library
INCLUDE			= -I${LIB_PATH}
LIB 			= -lft

CC 				= clang

FLAGS 			= -Wall -Werror -Wextra

REMOVE 			= rm -f

SRCS 		= 	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_split.c \

BONUS_SRCS = 	ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c \

OBJS 			= $(SRCS:.c=.o)

BONUS_OBJS 		= $(BONUS_SRCS:.c=.o)

all: 			$(NAME)

$(NAME): 		$(OBJS)
				ar -rcs $(NAME) $(OBJS)

bonus: 			$(NAME) $(BONUS_OBJS)
				ar -rcs $(NAME) $(BONUS_OBJS)

.c.o:
				$(CC) $(FLAGS) -c $< -o $(<:.c=.o) $(INCLUDE)

clean:
				$(REMOVE) $(OBJS) $(BONUS_OBJS)

fclean: 		clean
				$(REMOVE) $(NAME)

re: 			fclean all

norm:
				norminette

.PHONY: re all clean fclean bonus norm