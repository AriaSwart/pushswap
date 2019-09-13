
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"

typedef struct      s_stack
{
    int             num;
    struct s_stack  *next;
}                   t_stack;

t_stack     *ft_node(int n);
void        ft_append(t_stack **alst, t_stack *node);
void        ft_push(t_stack **src, t_stack **dest);
void        ft_swap(t_stack **a);
void        ft_rotate(t_stack **src);
void        ft_rev_rotate(t_stack **src);
int         ft_listlen(t_stack **lst);
int         ft_section_ascending(t_stack **start, t_stack *stop);
int         ft_section_descending(t_stack **start, t_stack *stop);
t_stack     *ft_scanlist_ascending(t_stack **list);
t_stack     *ft_scanlist_descending(t_stack **list);
int         ft_listmedian(t_stack **list);
int         ft_listset(t_stack **list);
void        ft_mediansplit(t_stack **a, t_stack **b);
void        ft_simplemerge(t_stack **a, t_stack **b);
t_stack     *ft_findmin(t_stack **list);
t_stack     *ft_findmax(t_stack **list);
t_stack     *ft_findend(t_stack **list);
int         ft_findpos(t_stack **list, t_stack *item);
t_stack     *ft_posfind(t_stack **list, int pos);
int         ft_autocycle_a(t_stack **list);
int         ft_autocycle_b(t_stack **list);
//int         ft_autocycle(t_stack **a, t_stack **b);
void        ft_print(t_stack **a, t_stack **b);
void        ft_doargs(t_stack **a, t_stack **b);
void        ft_docommand(char *str, t_stack **a, t_stack **b);

#endif