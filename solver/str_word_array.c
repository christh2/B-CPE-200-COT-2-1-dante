/*
** EPITECH PROJECT, 2023
** str word array
** File description:
** str to word array
*/
#include "my.h"

char* read_file(char *file)
{
    int fd = open(file,O_RDONLY);
    struct stat b;
    if (fd == -1) {
        exit(84);
    }
    stat(file, &b);
    char *str = (char*)malloc(sizeof(char) * (b.st_size + 1));
    int n = read(fd,str,(b.st_size));
    str[b.st_size] = '\0';
    if (n == 0) {
        close(fd);exit(84);
    }
    close(fd);
    return str;
}

char** alloc_array(char *str)
{
    int y = line_nbr(str);int *tab = cols_nbr(str);
    char **arr = NULL;
    arr = (char**)malloc(sizeof(char*) * (y + 1));int i;
    for (i = 0;i < y;i++)
        arr[i] = (char*)malloc(sizeof(char) * (tab[i] + 1));
    arr[i] = NULL;
    free(tab);
    return arr;
}

char** init_array(char *str, char **arr)
{
    int a = 0;int b = 0;
    for (int i = 0;str[i] != '\0';i++) {
        if (check(str[i]) == 1) {
            arr[b][a] = str[i];
            a++;
        } if (check(str[i]) == 1 && check(str[i + 1]) == 0) {
            arr[b][a] = '\0';a = 0;b++;
        }
    }
    return arr;
}

char** str_word_array(char *str)
{
    char **arr = alloc_array(str);
    arr = init_array(str,arr);
    return arr;
}

char** make_array_fromfile(char *file)
{
    char *str = read_file(file);
    check_str(str);
    char **arr = str_word_array(str);
    free(str);
    return arr;
}
