NAME = a.out

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SOURCES = srcs/*

LIB = libft/libft.a

INCL =  includes/

all:
	$(CC) $(CFLAGS) $(SOURCES) $(LIB) -I $(INCL)