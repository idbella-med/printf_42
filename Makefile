SRC = ft_putnbr.c ft_putstr.c ft_putchar.c ft_printf.c ft_putuint.c

OBJSRC = $(SRC:.c=.o)

NAME = libftprintf.a

COMP = cc

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJSRC)
	ar rcs $(NAME) $(OBJSRC)

%.o: %.c pirntf.h
	$(COMP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJSRC)

fclean: clean
	rm -f $(NAME)

re: fclean all