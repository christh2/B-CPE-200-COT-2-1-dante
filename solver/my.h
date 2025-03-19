/*
** EPITECH PROJECT, 2023
** my h
** File description:
** my functions prototype
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdbool.h>
#include <string.h>
#ifndef MY_H_
    #define MY_H_

typedef struct vector2i vector2i;
struct vector2i {
    int x;
    int y;
};

typedef struct list list;
struct list {
    vector2i pos;
    list *next;
    list *prev;
};

typedef struct control control;
struct control {
    list *first;
    list *last;
};

int check(char c);
char** make_array_fromfile(char *file);
int line_nbr(char *str);
int* cols_nbr(char *str);
char** browse(char **arr, vector2i *pos);
char** substitute(int x, int y, char **arr);
int** create_tab(int x, int y, char **arr);
char** solver(int **tab, char **arr, int x, int y);
void pass(char **arr);
control* init_list(void);
void add_end(control *pt, int x, int y);
void delete_elem(control *pt);
void free_list(control *fst);
void true_way(char **arr, control *fst);
void delete_char(char **arr, control *fst);
int check_list(control *fst, int x, int y);
int check_end(char **arr, vector2i pos);
int free_pos(char **arr, int x, int y, control *fst);
void direction(char **a, vector2i *pos);
void function(char **arr, vector2i *pos, control *fst);
int wrong_direction(control *fst, vector2i *pos, char **arr);
char free_dir(char **arr,int x, int y, control *fst);
int error(int ac, char **av);
void check_str(char *str);
int my_strlen(char *str);
int tab_line(char **arr);
char** map_dup(char **arr);
void solve(char **arr, char *str);
void free_tab(char **arr);
void check_solution(vector2i pos, vector2i old, char **arr, control *fst);
int right(char **arr, int x, int y, control *fst);
int left(char **arr, int x, int y, control *fst);
int up_dir(char **arr, int x, int y, control *fst);
int down(char **arr, int x, int y, control *fst);

#endif
