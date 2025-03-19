##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## make
##

all:
	make -C solver/
	make -C generator/
clean:
	make clean -C solver/
	make clean -C generator/

fclean: clean
	make fclean -C solver/
	make fclean -C generator

re:	fclean all
