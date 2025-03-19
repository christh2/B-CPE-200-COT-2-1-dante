##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## 101pong
##

SRC 	=	$(wildcard *.c)

NAME 	=	generator

all: $(NAME)

$(NAME):	$(SRC)
	gcc $(SRC) -o $(NAME) -g3

clean:
	rm -f *#
	rm -f *~

fclean: clean
	rm -f $(NAME)

re:	fclean all
