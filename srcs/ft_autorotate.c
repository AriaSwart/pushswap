#include "push_swap.h"

static void ft_autorotate_a(t_stack **a);

static void ft_autorotate_b(t_stack **b);

void    ft_autorotate(t_stack **a, t_stack **b)
{
    if (ft_scanlist_ascending(a) == 1)
        ft_autorotate_a(a);
    if (ft_scanlist_descending(b) == 1)
        ft_autorotate_b(b);
}