/*
** EPITECH PROJECT, 2023
** check
** File description:
** check elem
*/

int check(char c)
{
    if (c == '\0' || c == '\n' || c == ' ' || c == ':')
        return 0;
    else
        return 1;
}
