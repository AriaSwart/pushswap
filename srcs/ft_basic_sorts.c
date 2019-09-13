#include "push_swap.h"

void    ft_sort_3_asc(t_stack **list)
{
    if ((*list)->next->next == ft_findmax(list))
    {
        if ((*list)->next == ft_findmin(list))
        {
            ft_swap(list);
            ft_putstr("sa ");
        }
        else
            return ;
        
    }
    if ((*list) == ft_findmax(list))
    {
        ft_rev_rotate(list);
        ft_putstr("rra ");
        if ((*list)->next == ft_findmin(list))
        {
            ft_swap(list);
            ft_putstr("sa ");
        }
        else
            return ;
    }
}