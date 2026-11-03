SRC_FOLDER = part1
MY_SOURCES = $(wildcard $(SRC_FOLDER)/*.c)
MY_HEADER = libft.h
MY_OBJECTS = $(MY_SOURCES:.c=.o)
MY_LIB = libft.a
CFLAGS = -g -Wall -Wextra -Werror -Iincludes
CC = gcc

all: $(MY_LIB)

$(MY_SOURCES:%.o): $(%MY_SOURCES:%.c)
	$(CC) $(CFLAGS) -c $< -o $@

$(MY_LIB): $(MY_OBJECTS)
	ar -rc $(MY_LIB) $(MY_OBJECTS) $(MY_HEADER)

fclean: clean
	rm -f $(MY_LIB)

clean:
	rm -f $(MY_OBJECTS)

re: fclean all

.PHONY: re all libft.a fclean clean