/*
** EPITECH PROJECT, 2023
** solve
** File description:
** solve
*/
#include "my.h"

void free_tab(char **arr)
{
    for (int i = 0;arr[i];i++)
        free(arr[i]);
    free(arr);
}

void check_solution(vector2i pos, vector2i old, char **arr, control *fst)
{
    if (pos.x == old.x && pos.y == old.y) {
        free_tab(arr);free_list(fst);
        printf("no solution found\n");
        exit(0);
    }
}
