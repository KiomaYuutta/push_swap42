NAME = push_swap

SOURCES = push_swap.c actions_a.c actions_b.c actions_utils.c push_swap_utils.c \
sort.c sort_func.c actions_g.c sort_utils.c push_swap_utils2.c

OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJECTS) pushswap.h
	cd ft_printf && make
	ar r push_swap.a $(OBJECTS) pushswap.h
	cc $(CFlags) push_swap.a ft_printf/libftprintf.a -o push_swap

clean:
	rm -f $(OBJECTS)
	cd ft_printf && make clean

fclean: clean
	cd ft_printf && rm -f libftprintf.a
	rm -f push_swap push_swap.a

re: fclean all