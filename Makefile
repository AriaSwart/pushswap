NAME = a.out

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SOURCES = srcs/*.c

OBJECTS = srcs/*.o

LIB = libft/libft.a

INCL =  includes/

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SOURCES) $(LIB) -I $(INCL)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all