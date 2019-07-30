
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../srcs/ft_node.c"
# include "../srcs/ft_operation.c"
# include "ft_do_args.c"
# include "ft_print.c"

typedef struct      s_stack
{
    int             num;
    struct s_stack  *next;
}                   t_stack;

void        ft_swap(t_stack **a);
t_stack     *ft_node(int n);
void        ft_append(t_stack **alst, t_stack *node);
void        ft_print(t_stack *a, t_stack *b);
void        ft_push(t_stack **src, t_stack **dest);
void        ft_rotate(t_stack **src);
void        ft_rev_rotate(t_stack **src);
void        ft_doargs(t_stack **a, t_stack **b);

#endif