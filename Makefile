##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC =	src/my_atoi.c	\
	src/my_strlen.c	\
	src/bsq.c	\
	src/open_size.c	\
	src/my_putchar.c\
	src/my_putstr.c	\
	src/my_putnbr.c	\
	src/find_bsq.c	\
	src/my_strlen_line.c	\
	src/my_atoi_first_line.c	\
	src/bsq_tools.c	\
	src/bsq_tools_1.c \
	src/error_handling.c	\
	src/main.c	\

SRC_TEST = 	src/my_atoi.c   \
		src/my_strlen.c \
		src/bsq.c       \
		src/open_size.c \
		src/my_putchar.c\
		src/my_putstr.c \
		src/my_putnbr.c \
		src/find_bsq.c  \
		src/my_strlen_line.c    \
		src/my_atoi_first_line.c        \
		src/bsq_tools.c \
		src/bsq_tools_1.c \
		src/error_handling.c    \

OBJ = $(SRC:.c=.o)

BSQ_BIN = bsq

TEST_BIN = test

TEST_SRC = tests/tests.c

CFLAGS += -Wall -Wextra

all:	$(OBJ)
	gcc $(OBJ) -o $(BSQ_BIN)

clean:
	rm -f $(OBJ)
	rm -f ./src/*~
	rm -f *gcno
	rm -f *gcda

fclean: clean
	rm -f $(BSQ_BIN)
	rm -f $(TEST_BIN)

re: fclean all

unit_tests: fclean all
	gcc $(CFLAGS) $(SRC_TEST) $(TEST_SRC) -o $(TEST_BIN) -lcriterion --coverage
