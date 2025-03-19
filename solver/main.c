/*
** EPITECH PROJECT, 2023
** main
** File description:
** main function
*/
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

void function(char **arr, vector2i *pos, control *fst)
{
    int a = 0;
    int n = wrong_direction(fst, pos, arr);
    char c = free_dir(arr, pos->x, pos->y,fst);
    if (c == 'r') {
        pos->x++;
        add_end(fst,pos->x,pos->y);
        a++;return;
    } if (c == 'd') {
        pos->y++;
        add_end(fst,pos->x,pos->y);
        a++;return;
    } if (c == 'l') {
        pos->x--;
        add_end(fst,pos->x,pos->y);
        a++;return;
    } if (c == 'u') {
        pos->y--;
        add_end(fst,pos->x,pos->y);
        a++;return;
    }
}

int main(int ac, char **av)
{
    if (error(ac,av) == 0)
        return (84);
    vector2i pos;
    char **arr = make_array_fromfile(av[1]);
    control *fst = init_list();
    true_way(arr,fst);
    delete_char(arr,fst);int i;
    for (i = 0;arr[i + 1];i++) {
        write(1, arr[i], strlen(arr[i]));
        write(1, "\n", 1);
        free(arr[i]);
    }
    write(1, arr[i], strlen(arr[i]));free(arr[i]);
    free(arr);
    free_list(fst);
    return 0;
}
