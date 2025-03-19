/*
** EPITECH PROJECT, 2023
** solve maze
** File description:
** solve maze
*/
#include "my.h"

int check_char(char c)
{
    if (c == '*')
        return 1;
    else
        return 0;
}

int wrong_direction(control *fst, vector2i *pos, char **arr)
{
    int c = free_pos(arr,pos->x,pos->y,fst);
    if (c != 1) {
        arr[pos->y][pos->x] = 'd';
        delete_elem(fst);
        pos->x = fst->last->pos.x;
        pos->y = fst->last->pos.y;
        return 1;
    }
    return 0;
}

void funct(vector2i pos, vector2i old, char **arr, control *fst)
{
    if (pos.x == old.x && pos.y == old.y) {
        free_tab(arr);
        free_list(fst);
        printf("no solution");
        exit(0);
    }
}

void true_way(char **arr, control *fst)
{
    vector2i old = {0,0};
    vector2i pos;pos.x = 0;pos.y = 0;
    while (1) {
        old.x = pos.x;old.y = pos.y;
        if (check_end(arr,pos) == 1)
            break;
        function(arr, &pos, fst);
        check_solution(pos,old,arr,fst);
    }
}

void delete_char(char **arr, control *fst)
{
    list *tmp = fst->first;
    while (tmp) {
        arr[tmp->pos.y][tmp->pos.x] = 'o';
        tmp = tmp->next;
    }
    for (int i = 0;arr[i];i++) {
        for (int j = 0;arr[i][j] != '\0';j++) {
            (arr[i][j] == 'd') ? arr[i][j] = '*' : 0;
        }
    }
}
