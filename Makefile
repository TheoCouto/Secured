##
## EPITECH PROJECT, 2023
## Secured
## File description:
## Makefile
##

SRC	=	src/hash.c				\
		src/new_hashtable.c		\
		src/delete_hashtable.c	\
		src/ht_insert.c			\
		src/ht_delete.c			\
		src/ht_search.c			\
		src/ht_dump.c			\
		src/my_putchar.c		\
		src/my_putstr.c			\
		src/my_put_nbr.c		\
		src/my_strcmp.c			\
		src/my_strdup.c			\

OBJ	=	$(SRC:.c=.o)

NAME	=	libhashtable.a

TESTS	=	unit_tests

all: $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f *#
	rm -f *.gcno
	rm -f *.gcda

fclean: clean
	rm -f $(NAME)
	rm -f $(TESTS)

re: fclean all

$(TESTS): re
	gcc -o $(TESTS) $(SRC) tests/*.c -L ./ $(NAME) --coverage -lcriterion

tests_run: $(TESTS)
	./$(TESTS)
