NAME = libftprintf.a

SRC = ./SRC/ft_charprint.c \
      ./SRC/ft_handle_error.c \
      ./SRC/ft_hexprint.c \
      ./SRC/ft_intprint.c \
      ./SRC/ft_pointerprint.c \
      ./SRC/ft_printf.c \
      ./SRC/ft_stringprint.c \
      ./SRC/ft_unsignedprint.c \
      ./SRC/ft_toupper.c		\
	  ./SRC/ft_putchar.c		\
	  ./SRC/ft_putnbr.c			

OBJECTS = $(SRC:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all