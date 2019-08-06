#include "push_swap.h"

int     ft_isascending(t_stack *list)
{
    t_stack *tmp;
    
    tmp = list;
    while (tmp->next != NULL)
    {
        if (tmp->num > tmp->next->num)
            return (0);
        tmp = tmp->next;
    } 
    return (1);
}

int     ft_isdescending(t_stack *list)
{
    t_stack *tmp;

    tmp = list;
    while (tmp->next != NULL)
    {
        if (tmp->num < tmp->next->num)
            return (0);
        tmp = tmp->next;
    } 
    return (1);
}

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