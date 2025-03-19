/*
** EPITECH PROJECT, 2023
** new maze
** File description:
** new maze creating
*/
#include "my.h"

char* my_strdup(char *str)
{
    int n = my_strlen(str);
    char *tab = (char*)malloc(sizeof(char) * n);
    for (int i = 0;str[i] != '\0';i++) {
        tab[i] = str[i];
    }
    return tab;
}

char** map_dup(char **arr)
{
    int y = tab_line(arr);
    char **tab = (char**)malloc(sizeof(char*) * y);
    for (int i = 0;arr[i];i++) {
        tab[i] = my_strdup(arr[i]);
    }
    return tab;
}
