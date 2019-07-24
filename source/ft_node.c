#include "pushswap.h"
# include "../libft/libft.h"

i_list *ft_node(int n){
    i_list *node;

    node = (i_list*)malloc(sizeof(i_list));
    node->data = n;
    node->next = NULL;
    return (node);
}

void    ft_append(i_list **alst, i_list *node)
{
    i_list *lst;

    lst = *alst;
    if (*alst == NULL)
    {
        *alst = node;
        return ;
    }
    else
    {
        while (lst->next)
            lst = lst->next;
    }
    lst->next = node;    
}

void ft_printlst(i_list *lst)
{
    while (lst)
    {
        ft_putnbr(lst->data);
        ft_putchar('\n');
        lst = lst->next;
    }
}

int main(int ac, char **av)
{
    i_list *stack;
    int i;

    stack = (i_list*)malloc(sizeof(i_list));
    stack = NULL;
    if (ac > 1)
    {
        i = 1;
        while (av[i]){
            ft_append(&stack, ft_node(ft_atoi(av[i])));
            i++;
        }
    }
    ft_printlst(stack);
}