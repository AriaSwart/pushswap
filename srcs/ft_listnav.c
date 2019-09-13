#include "push_swap.h"

t_stack     *ft_findmin(t_stack **list)
{
    t_stack *temp;
    t_stack *min;
    
    temp = *list;
    min = *list;
    while (temp->next != NULL)
    {
        temp = temp->next;
        if (temp->num < min->num)\
            min = temp;
    }
    return (min);
}

t_stack     *ft_findmax(t_stack **list)
{
    t_stack *temp;
    t_stack *max;
    
    temp = *list;
    max = *list;
    while (temp->next != NULL)
    {
        temp = temp->next;
        if (temp->num > max->num)
            max = temp;
    }
    return (max);
}

t_stack     *ft_findend(t_stack **list)
{
    t_stack *temp;
    
    temp = *list;
    while (temp->next != NULL)
        temp = temp->next;
    return (temp);
}

int         ft_findpos(t_stack **list, t_stack *item)
{
    t_stack *temp;
    int     i;
    
    temp = (*list);
    i = 0;
    while (temp != item && temp->next != NULL)
    {
        temp = temp->next;
        i++;
    }
    if (temp == item)
        return (i);
    return (-1);
}

t_stack     *ft_posfind(t_stack **list, int pos)
{
    t_stack *temp;
    int i;
    
    temp = (*list);
    i = 0;
    while (i <= pos)
    {
        temp = temp->next;
        i++;
    }
    return (temp);
}