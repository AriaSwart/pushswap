#include "push_swap.h"

int     ft_listlen(t_stack *lst)
{
    t_stack *temp;
    int i;
    
    if (lst == NULL)
        return (0);
    i = 1;
    temp = lst;
    while (temp->next != NULL)
    {
        temp = temp->next;
        i++;
    }
    return (i);
}

t_stack *ft_scanlist_ascending(t_stack *list)
{
    t_stack *tmp;
    t_stack *data;
    int     i;

    i = 0;
    tmp = list;
    while (tmp->next != NULL)
    {
        if (tmp->num > tmp->next->num)
        {
            ft_append(&data, ft_node(i));
            i++;
        }
        tmp = tmp->next;
    } 
    return (data);
}

t_stack *ft_scanlist_descending(t_stack *list)
{
    t_stack *tmp;
    t_stack *data;
    int     i;

    i = 0;
    tmp = list;
    while (tmp->next != NULL)
    {
        if (tmp->num < tmp->next->num)
        {
            ft_append(&data, ft_node(i));
            i++;
        }
        tmp = tmp->next;
    } 
    return (data);
}