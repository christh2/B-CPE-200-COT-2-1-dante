/*
** EPITECH PROJECT, 2023
** free_pos
** File description:
** free position
*/
#include "my.h"

int right(char **arr, int x, int y, control *fst)
{
    if ((y - 1 < 0 || arr[y - 1][x] != '*' ||
    check_list(fst, x, y - 1) == 1) &&
    (arr[y + 1] == NULL || arr[y + 1][x] != '*' ||
    check_list(fst, x, y + 1) == 1)
    && (x - 1 < 0 || arr[y][x - 1] != '*' || check_list(fst,x - 1,y) == 1) &&
    (check_list(fst, x + 1, y) == 1)) {
        return 0;
    }
    return 1;

}

int up_dir(char **arr, int x, int y, control *fst)
{
    if ((arr[y][x + 1] != '*' || check_list(fst, x + 1, y) == 1)
    && (x - 1 < 0 || arr[y][x - 1] != '*' || check_list(fst, x - 1, y) == 1)
    && (arr[y + 1] == NULL || arr[y + 1][x] != '*' ||
    check_list(fst, x, y + 1) == 1)
    && (check_list(fst, x, y - 1) == 1))
        return 0;
    return 1;
}

int down(char **arr, int x, int y, control *fst)
{
    if ((arr[y][x + 1] != '*' || check_list(fst, x + 1, y) == 1) &&
    (x - 1 < 0 || arr[y][x - 1] != '*'
    || check_list(fst, x - 1, y) == 1)
    && (y - 1 < 0 || arr[y - 1][x] != '*' || check_list(fst, x, y - 1) == 1)
    && (check_list(fst, x, y + 1) == 1))
        return 0;
    return 1;
}

int left(char **arr, int x, int y, control *fst)
{
    if ((arr[y + 1] == NULL || arr[y + 1][x] != '*'
    || check_list(fst, x, y + 1) == 1)
    && (y - 1 < 0 || arr[y - 1][x] != '*' || check_list(fst, x, y - 1) == 1)
    && (arr[y][x + 1] != '*'
    || check_list(fst, x + 1, y) == 1) &&
    (check_list(fst,x - 1, y) == 1))
        return 0;
    return 1;
}
