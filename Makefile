NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

HEADER = includes/ft_printf.h

SRCS = 	./srcs/ft_eval_format.c \
		./srcs/ft_hexademical_lower.c \
		./srcs/ft_hexademical_lower0.c \
		./srcs/ft_hexademical_upper.c \
		./srcs/ft_printf.c \
		./srcs/ft_put_x.c \
		./srcs/ft_putx.c \
		./srcs/ft_putchar.c \
		./srcs/ft_putnbr_int.c \
		./srcs/ft_putnbr_unsigned.c \
		./srcs/ft_putpointer.c \
		./srcs/ft_strlen.c \
		./srcs/ft_putstr.c \

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re