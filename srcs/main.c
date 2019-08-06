#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack *a;
    t_stack *b;
    int i;

    a=NULL;
    b=NULL;
    i = 0;
    while (++i < argc)
        ft_append(&a, ft_node(ft_atoi(argv[i])));
    while (1)
    {
        ft_doargs(&a, &b);
        ft_print(a, b);
    }
}