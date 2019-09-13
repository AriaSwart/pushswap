#include "push_swap.h"

void        ft_simplemerge(t_stack **a, t_stack **b)
{
    int i;
    int n;
    
    i = ft_listlen(b);
    n = 0;
    while (n < i)
    {
        ft_push(b, a);
        ft_putstr("pa ");
        n++;
    }
}

int     ft_listmedian(t_stack **list)
{
    t_stack *temp;
    int     min;
    int     max;
    int     low;
    int     high;
    
    temp = *list;
    min = max = temp->num;
    while (temp->next != NULL) //finds the min and max values in the list
    {
        if (temp->num > max)
            max = temp->num;
        if (temp->num < min)
            min = temp->num;
        temp = temp->next;
    }
    while (min < max)
    {
        temp = *list;
        low = max;
        high = min;
        while (temp->next != NULL) //finds the next lowest/highest value
        {
            if (min < temp->num && temp->num < low)
                low = temp->num;
            if (max > temp->num && temp->num > high)
                high = temp->num;
            temp = temp->next;
        }
        min = low; //adjusts endpoints
        max = high;
    }
    return (min);
}

static void ft_advanced_pb(t_stack **a,t_stack **b)
{
    if (*b && (*b)->next && (*b)->next->num < (*b)->num)
    {
        ft_swap(b);
        ft_putstr("sb ");
    }
    ft_push(a, b);
    ft_putstr("pb ");
}

static void ft_advanced_ra(t_stack **a)
{
    ft_rotate(a);
    ft_putstr("ra ");
}

void    ft_mediansplit(t_stack **a, t_stack **b)
{
    int     median;
    int     i;
    int     len;
    
    median = ft_listmedian(a);
    len = ft_listlen(a);
    i = 0;
    while (i < len)
    {
        if ((*a)->num < median)
            ft_advanced_pb(a, b);
        else
            ft_advanced_ra(a);
        i++;
    }
    //ft_simplemerge(a, b);
    ft_putchar('\n');
}