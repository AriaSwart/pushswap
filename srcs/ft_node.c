#include "push_swap.h"

t_stack  *ft_node(int n)
{
   t_stack *node;

   node = (t_stack *)malloc(sizeof(t_stack));
   node->num = n;
   node->next = NULL;
   return (node);
}
void    ft_append(t_stack **alst, t_stack *node)
{
   t_stack *lst;

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

int         ft_listlen(t_stack **lst)
{
    t_stack *temp;
    int i;
    
    if (*lst == NULL)
        return (0);
    i = 1;
    temp = *lst;
    while (temp->next != NULL)
    {
        temp = temp->next;
        i++;
    }
    return (i);
}