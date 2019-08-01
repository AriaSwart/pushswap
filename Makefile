NAME = a.out

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SOURCES = srcs/*.c

OBJECTS = srcs/*.o

INCL =  includes/

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SOURCES) -I $(INCL)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all