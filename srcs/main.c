#include "push_swap.h"

int main(void)
{
    t_stack *a;
    t_stack *b;
    int i;

    a=NULL;
    b=NULL;
    i = -1;
    while (++i < 10)
    ft_append(&a, ft_node(i));
    while (1)
    {
        ft_doargs(&a, &b);
        ft_print(a, b);
    }
}