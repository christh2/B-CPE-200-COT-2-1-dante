/*
** EPITECH PROJECT, 2023
** count
** File description:
** count elem
*/
#include "my.h"

int line_nbr(char *str)
{
    int y = 0;
    for (int i = 0;str[i] != '\0';i++) {
        if (check(str[i]) == 1 && check(str[i + 1]) == 0)
            y++;
    }
    return y;
}

int* cols_nbr(char *str)
{
    int x = 0;int a = 0;
    int y = line_nbr(str);
    int *tab = (int*)malloc(sizeof(int) * y);
    for (int i = 0;str[i] != '\0';i++) {
        if (check(str[i]) == 1) {
            x++;
        }
        if (check(str[i]) == 1 && check(str[i + 1]) == 0) {
            tab[a] = x;a++;x = 0;
        }
    }
    return tab;
}
