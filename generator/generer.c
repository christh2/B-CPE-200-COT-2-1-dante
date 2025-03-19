/*
** EPITECH PROJECT, 2023
** gen
** File description:
** gen
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

void error(char *str, char *tab);

char **imper(int cols, int line)
{
    int i; char **tab = malloc(sizeof(char *) * (line + 1));
    for (i = 0; i < line; i++) {
        tab[i] = malloc(sizeof(char) * (cols + 1));
    }
    for (int a = 0; a < line; a++) {
        for (int j = 0; j < cols; j++)
            tab[a][j] = '*';
    }
    for (int k = 1; k < line; k = k + 2) {
        for (int n = 0; n < cols; n++) {
            tab[k][n] = 'X';
        } int z = rand() % cols; int t = rand() % cols;
        tab[k][z] = '*'; tab[k][t] = '*';
    }
    if (line % 2 == 0) {
        for (int p = 0; p < cols; p++) {
            tab[line - 1][p] = 'X';
        }
    } tab[line - 1][cols - 1] = '*';
    return tab;
}

char **map(int cols, int line)
{
    int i = 0;
    char **tab = malloc(sizeof(char *) * (line + 1));
    for (i = 0; i < line; i++) {
        tab[i] = malloc(sizeof(char) * (cols + 1));
    }
    for (int a = 0; a < line; a++) {
        for (int j = 0; j < cols; j++)
            tab[a][j] = '*';
    }
    int k = 0;
    for (k = 1; k < line; k = k + 2) {
        for (int n = 0; n < cols; n++) {
            tab[k][n] = 'X';
        }
        int p = rand() % cols;
        tab[k][p] = '*';
    }
    for (int p = 0; p < cols; p++)
        tab[line - 1][p] = '*';
    return tab;
}

void my_free(char **tab)
{
    for (int t = 0; tab[t] != NULL; t++)
        free(tab[t]);
    free(tab);
}

void affich(char **tab)
{
    int g;
    for (g = 0; tab[g + 1] != NULL; g++)
        printf("%s\n", tab[g]);
    printf("%s",tab[g]);
}

/*int main(int ac, char **av)
{
    //error(av[1], av[2]);
    int y = atoi(av[2]); int x = atoi(av[1]);
    if (x == 0 || y == 0) {printf("\n"); return 0;}
    if (x < 0 || y < 0) return 84;
    if (ac == 4 && strcmp(av[3], "perfect") == 0) {
        char **tab = map(x, y);
        affich(tab);
        for (int t = 0; tab[t] != NULL; t++)
            free(tab[t]);
        free(tab);
    } else if (ac == 3) {
        char **tab = imper(x, y);
        affich(tab);
        my_free(tab);
    } return 0;
}*/
