#include "push_swap.h"

void ft_docommand(char *str, t_stack **a, t_stack **b)
{
    if (ft_strequ(str, "sa") || ft_strequ(str, "ss"))
        ft_swap(a);
    if (ft_strequ(str, "sb") || ft_strequ(str, "ss"))
        ft_swap(b);
    if (ft_strequ(str, "pa"))
        ft_push(b, a);
    if (ft_strequ(str, "pb"))
        ft_push(a, b);
    if (ft_strequ(str, "ra") || ft_strequ(str, "rr"))
        ft_rotate(a);
    if (ft_strequ(str, "rb") || ft_strequ(str, "rr"))
        ft_rotate(b);
    if (ft_strequ(str, "rra") || ft_strequ(str, "rrr"))
        ft_rev_rotate(a);
    if (ft_strequ(str, "rrb") || ft_strequ(str, "rrr"))
        ft_rev_rotate(b);
    if (ft_strequ(str, "auto"))
        ft_autocycle_a(a);
}

void ft_doargs(t_stack **a, t_stack **b)
{
    char *str;
    char **arr;
    int  i;

    i= -1;
    ft_putstr("exec:");
    get_next_line(0, &str);
    arr = ft_strsplit(str, ' ');
    while (arr[++i])
        ft_docommand(arr[i], a, b);
    ft_putchar('\n');
}