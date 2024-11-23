COMP = cc

FLAG = -Wall -Wextra -Werror

SRC = ft_putnbr.c ft_putstr.c ft_putchar.c ft_printf.c ft_put_u_int.c ft_puthexa.c ft_tohexa.c

OBJSRC = $(SRC:.c=.o)

NAME = libftprintf.a

all : $(NAME)

$(NAME): $(OBJSRC)
	ar rcs $(NAME) $(OBJSRC)

%.o: %.c ft_printf.h
		$(COMP) $(FLAG) -c -o $@ $<

clean:
	rm -f $(OBJSRC)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : clean