NAME = libftprintf.a

LIBFT = libft/libft.a

SRCS = 	ft_printf.c 				\
		src/ft_printf_utils.c		\


OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(CFLAGS) $(SRCS) 
	ar -rc $(NAME) $(OBJS)

clean:
	rm -f *.o
	/bin/rm -f $(OBJS)
	$(MAKE) clean -C ./libft

fclean: clean
	$(MAKE) fclean -C ./libft
	/bin/rm -f $(NAME)

re : fclean all