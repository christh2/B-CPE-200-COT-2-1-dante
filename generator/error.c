/*
** EPITECH PROJECT, 2023
** error
** File description:
** error management
*/
#include <stdlib.h>

int check(char *str)
{
    for (int i = 0;str[i] != '\0';i++) {
        if (str[i] < '0' || str[i] > '9')
            return 0;
    }
    return 1;
}

void error(char *str, char *tab)
{
    if (check(str) == 0 || check(tab) == 0) {
        exit(84);
    }
}
