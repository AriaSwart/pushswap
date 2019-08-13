#include "push_swap.h"

int     ft_scanlist_ascending(t_stack *list)
{
    t_stack *tmp;
    int     i;

    i = 0;
    tmp = list;
    while (tmp->next != NULL)
    {
        if (tmp->num > tmp->next->num)
            i++;
        tmp = tmp->next;
    } 
    return (i);
}

int     ft_scanlist_descending(t_stack *list)
{
    t_stack *tmp;
    int     i;

    i = 0;
    tmp = list;
    while (tmp->next != NULL)
    {
        if (tmp->num < tmp->next->num)
            i++;
        tmp = tmp->next;
    } 
    return (i);
}