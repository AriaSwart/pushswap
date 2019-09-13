#include "push_swap.h"

t_stack     *ft_listset(t_stack **list, int total, t_stack *ignore)
{
    t_stack *temp;
    t_stack *min;
    t_stack *max;
    t_stack *low;
    int     i;
    
    min = ft_findmin(list);
    low = ft_findmax(list);
    temp = *list;
    i = 0;
    while (min->num < max->num && i < total)
    {
        temp = *list;
        low = max;
        while (temp->next != NULL) //finds the next lowest/highest value
        {
            if (min->num < temp->num && temp->num < low->num)
                low = temp;
            temp = temp->next;
        }
        min = low; //adjusts endpoints
        i++;
    }
    return (min);
}