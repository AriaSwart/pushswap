#include "../includes/push_swap.h"

void ft_print(t_stack **a, t_stack **b)
{
    t_stack *ptr_a;
    t_stack *ptr_b;

    ptr_a = *a;
    ptr_b = *b;
    while (ptr_a || ptr_b)
    {
        if (ptr_a)
        {
            ft_putnbr(ptr_a->num);
            ptr_a = ptr_a->next;
        }
        ft_putchar('\t');
        if (ptr_b)
        {
            ft_putnbr(ptr_b->num);
            ptr_b = ptr_b->next;
        }
        ft_putchar('\n');
    }
    ft_putendl("-\t-");
    ft_putendl("A\tB");
    ptr_a = ft_scanlist_ascending(a);
//    if (ft_listlen(&ptr_a) == 0 || ft_listlen(b))
//        ft_putendl("OK");
//    else
//        ft_putendl("KO");
}