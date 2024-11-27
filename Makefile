NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRC =	ft_printf.c ft_countnbr.c \
	ft_printnegativ.c  ft_printptr.c\
	ft_printstring.c \
	ft_choose.c \
	ft_printnumber.c \
	ft_putchar.c ft_helpnumber.c

OBJ = $(SRC:.c=.o)
OBSRCB = $(SRCB:.c=.o)

all: $(NAME)

bonus: $(NAME) $(OBSRCB)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re