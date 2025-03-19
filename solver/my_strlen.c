/*
** EPITECH PROJECT, 2023
** my_strlen
** File description:
** str len
*/

int my_strlen(char *str)
{
    int i = 0;
    for (;str[i] != '\0';i++);
    return i;
}

int tab_line(char **arr)
{
    int x = 0;
    for (;arr[x];x++);
    return x;
}
