/*
** EPITECH PROJECT, 2023
** create list
** File description:
** create linked list
*/
#include "my.h"

control* init_list(void)
{
    list *tmp = (list*)malloc(sizeof(list));
    tmp->pos.x = 0;tmp->pos.y = 0;
    tmp->next = NULL;
    tmp->prev = NULL;
    control *pt = (control*)malloc(sizeof(control));
    pt->first = tmp;
    return pt;
}

void add_end(control *pt, int x, int y)
{
    list *tmp = pt->first;
    list *node = (list*)malloc(sizeof(list));
    node->pos.x = x;node->pos.y = y;
    node->next = NULL;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = node;
    node->prev = tmp;
    pt->last = node;
}

void delete_elem(control *pt)
{
    list *tmp = pt->first;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    pt->last = tmp->prev;
    tmp->prev->next = NULL;
    tmp->prev = NULL;
    free(tmp);
}

void free_list(control *fst)
{
    list *tmp = fst->first;
    list *ptr;
    while (tmp) {
        ptr = tmp;
        tmp = tmp->next;
        free(ptr);
    }
    free(fst);
}
