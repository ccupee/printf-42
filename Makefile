NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

HEAD_FILE = libft.h

SRCS = 		

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c $(HEAD_FILE)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re