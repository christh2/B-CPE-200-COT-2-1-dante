/*
** EPITECH PROJECT, 2023
** solver
** File description:
** solver
*/

#include "my.h"

int check_end(char **arr, vector2i pos)
{
    if (arr[pos.y + 1] == NULL
    && arr[pos.y][pos.x + 1] == '\0')
        return 1;
    else
        return 0;
}

int check_list(control *fst, int x, int y)
{
    list *tmp = fst->first;
    while (tmp) {
        if (tmp->pos.x == x && tmp->pos.y == y)
            return 1;
        tmp = tmp->next;
    }
    return 0;
}

int free_pos(char **arr, int x, int y, control *fst)
{
    if (left(arr,x,y,fst) == 0 || right(arr,x,y,fst) == 0
    || up_dir(arr,x,y,fst) == 0 || down(arr,x,y,fst) == 0)
        return 0;
    return 1;
}

char free_dir(char **arr,int x, int y, control *fst)
{
    char c = 'f';
    if (arr[y][x] == '*' && arr[y][x + 1] == '*'
    && check_list(fst,x + 1,y) == 0) {
        return 'r';
    } if (arr[y][x] == '*' && arr[y + 1] != NULL
    && arr[y + 1][x] == '*' && check_list(fst,x,y + 1) == 0) {
        return 'd';
    } if (arr[y][x] == '*' && x - 1 >= 0 && arr[y][x - 1] == '*'
    && check_list(fst,x - 1,y) == 0) {
        return 'l';
    } if (arr[y][x] == '*' && y - 1 >= 0 && arr[y - 1][x] == '*'
    && check_list(fst,x,y - 1) == 0) {
        return 'u';
    }
    return c;
}
