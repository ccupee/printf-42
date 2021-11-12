NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

HEADER = includes/ft_printf.h

DIR_S = srcs

DIR_O = obj

SRCS = 	ft_eval_format.c \
		ft_hexademical_lower.c \
		ft_hexademical_lower0.c \
		ft_hexademical_upper.c \
		ft_printf.c \
		ft_put_x.c \
		ft_putx.c \
		ft_putchar.c \
		ft_putnbr_int.c \
		ft_putnbr_unsigned.c \
		ft_putpointer.c \
		ft_putstr.c \
		ft_strlen.c	

OBJS = $(addprefix $(DIR_O), $(SRCS:.c=.o))

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(DIR_O)/%.o : $(DIR_S)%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re