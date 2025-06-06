NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c \
	ft_printnum.c \
	ft_printchr.c \
	ft_printstr.c \
	ft_printptr.c \
	ft_printunit.c \
	ft_printhex.c
OBJS = $(SRC:.c=.o)

LIBFT = ./libft/libft.a

LIBFTDIR = ./libft/

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	ar -rcs $(NAME) $(OBJS) $(LIBFT) $(LIBFTDIR)/*.o

$(LIBFT): $(LIBFTDIR)
	$(MAKE) -C $(LIBFTDIR)
clean :
	rm -rf $(OBJS)
	$(MAKE) clean -C $(LIBFTDIR)
fclean: clean
	rm -rf $(NAME)
	$(MAKE) fclean -C $(LIBFTDIR)
re: fclean all
