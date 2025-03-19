/*
** EPITECH PROJECT, 2023
** alloc arr
** File description:
** alloc array
*/
#include <stdlib.h>

char** alloc_arr(int x, int y)
{
    char **arr = (char **)malloc(sizeof(char*) * (y + 1));
    for (int i = 0; i < y;i++) {
        arr[i] = (char*)malloc(sizeof(char) * (x + 1));
    }
    return arr;
}
