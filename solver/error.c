/*
** EPITECH PROJECT, 2023
** error
** File description:
** error case for solving
*/
#include "my.h"

int error(int ac, char **av)
{
    if (ac != 2) {
        return 0;
    }
    return 1;
}

int check_elem(char c)
{
    if (c != 'X' && c != '*' && c != '\n') {
        return 0;
    } else
        return 1;
}

void check_str(char *str)
{
    for (int i = 0;str[i] != '\0';i++) {
        if (check_elem(str[i]) == 0) {
            free(str);
            exit(84);
        }
    }
}
