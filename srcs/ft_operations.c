#include "../includes/push_swap.h"

void    ft_push(t_stack **src, t_stack **dest)
{
    t_stack *tmp;
    
    if (src)
    {
        tmp = *src;
        *src = (*src)->next;
        tmp->next = *dest;
        *dest = tmp;
    }
}

void    ft_rotate(t_stack **src)
{
    t_stack *tmp;
    t_stack *ptr;

    tmp = *src;
    *src = (*src)->next;
    ptr = *src;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = tmp;
    ptr->next->next = NULL;
}

void    ft_rev_rotate(t_stack **src)
{
    t_stack *tmp;
    t_stack *ptr;

    ptr = *src;
    while (ptr->next->next != NULL)
        ptr = ptr->next;
    tmp = ptr->next;
    ptr->next = NULL;
    tmp->next = *src;
    *src = tmp;
}

void    ft_swap(t_stack **a)
{
    t_stack *tmp;

    if (*a && (*a)->next)
    {
        tmp = *a;
        (*a) = (*a)->next;
        tmp->next = (*a)->next;
        (*a)->next = tmp;
    } 
}