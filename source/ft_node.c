#include "pushswap.h"

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