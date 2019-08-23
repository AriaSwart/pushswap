#include "push_swap.h"

void    ft_sort_top3_asc(t_stack **list)
{
    if ((*list)->next->next->num > ((*list)->next->num))
    {
        if ((*list)->next->next->num < (*list)->num)
        {}
        else if ((*list)->next->num > ((*list)->num))
                ft_swap(list);
    }
}