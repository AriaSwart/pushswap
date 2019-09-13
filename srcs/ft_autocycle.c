#include "push_swap.h"

static void ft_cycle(t_stack **list, t_stack *end)
{
    int     turns;

    turns = ft_findpos(list, end) + 1;
    if (turns > ft_listlen(list) / 2)
    {
        turns = ft_listlen(list) - turns;
        while (turns)
        {
            ft_rev_rotate(list);
            ft_putstr("rra ");
            turns--;
        }
    }
    else
        while (turns)
        {
            ft_rotate(list);
            ft_putstr("ra ");
            turns--;
        }
}

int         ft_autocycle_a(t_stack **list)
{
    t_stack *min;
    t_stack *max;
    t_stack *end;
    
    if ((max = ft_findmax(list))->next == (min = ft_findmin(list)))
        if ((*list)->num > (end = ft_findend(list))->num)
            if (ft_section_ascending(list, max))
                if (ft_section_ascending(&min, end))
                {
                    ft_cycle(list, max);
                    return (1);
                }
    return (0);
}

int         ft_autocycle_b(t_stack **list)
{
    t_stack *min;
    t_stack *max;
    t_stack *end;
    
    if ((min = ft_findmin(list))->next == (max = ft_findmax(list)))
        if ((*list)->num < (end = ft_findend(list))->num)
            if (ft_section_descending(list, min))
                if (ft_section_descending(&max, end))
                {
                    ft_cycle(list, min);
                    return (1);
                }
    return (0);
}

//int         ft_autocycle(t_stack **a, t_stack **b)
//{}