#include "pushswap.h"
#include "ft_node.c"

void    ch_swap(i_list **lst)
{
    i_list *tmp;
    i_list *head;

    head = *lst;
    tmp = *lst;
    lst = lst->next;
    *lst->next = tmp;
}

void    ch_push(i_list src, i_list dest)
{
    i_list tmp;

    tmp = src;
    src = src->next;
    tmp->next = dest;
    dest = tmp;
}

void    ch_rotate(i_list **lst)
{
    i_list *tmp;
    i_list *start;

    tmp = *lst;
    start = *lst->next;
    while (lst->next)
        lst = lst->next;
    lst->next = tmp;
    tmp->next = NULL;
    *lst = start;
}

void    ch_rev_rotate(i_list **lst)
{
    i_list *head;
    i_list *tmp;

    head = *lst;
    while (lst->next && lst->next->next)
        lst = lst->next;
    tmp = *lst->next;
    *lst->next = NULL;
    tmp->next = head;
    *lst = tmp;
}