/*
** EPITECH PROJECT, 2023
** generate
** File description:
** generator
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

void error(char *str, char *tab);
char** alloc_arr(int x, int y);

void put_way(char **arr, int x, int i)
{
    srand(1);int n;int a = rand() % x;
    for (int j = 0; j < a; j++) {
        arr[i][a] = '*';
    }
}

void complex(char **arr, int x, int y)
{
    for (int i = 0;arr[i + 1];i++) {
        if (arr[i][0] == 'X') {
            put_way(arr,x,i);
        }
    }
    if (y == 2) {
        srand(time(NULL));
        int n = rand() % (x - 1);
        arr[y - 1][n] = '*';
    }
}

void function(char **arr, int x, int y)
{
    srand(time(NULL));int n;
    for (int i = 0;i < y - 1;i++) {
        if (arr[i][0] == 'X') {
            n = rand() % x;
            arr[i][n] = '*';
        }
    }
}

void remp_tab(char **arr, int x, int y)
{
    int j = 0;
    for (int i = 0;i < y;i++) {
        for (j = 0;j < x;j++) {
            (i == 0 || i == y - 1 || i % 2 == 0) ?
            (arr[i][j] = '*') : (arr[i][j] = 'X');
        }
        arr[i][j] = '\0';
    }
    if (y % 2 == 0) {
        int i;
        for (i = 0;arr[y - 1][i] != '\0';i++) {
            arr[y - 1][i] = 'X';
        }
        arr[y - 1][i - 1] = '*';
    }
}

int main(int ac, char **av)
{
    if (ac != 3 && ac != 4)
        return 84;
    error(av[1], av[2]);
    int x = atoi(av[1]);int y = atoi(av[2]);char **arr = alloc_arr(x,y);
    if (x == 0 || y == 0) {
        printf("\n");return 0;
    }
    remp_tab(arr,x,y);
    if (ac == 3) {
        function(arr,x,y);complex(arr,x,y);
    } if (ac == 4 && strcmp("perfect", av[3]) == 0) {
        function(arr, x, y);
    }int i;
    for (i = 0; arr[i + 1];i++) {
        write(1, arr[i], strlen(arr[i]));free(arr[i]);
        write(1, "\n", 1);
    }
    write(1, arr[i], strlen(arr[i]));free(arr[i]);free(arr);
    return (0);
}
