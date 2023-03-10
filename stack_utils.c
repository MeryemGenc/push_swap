#include "push_swap.h"

// swap -> sa/sb XXXX
// rotate -> ra/rb XXXX
// reverse rotate -> rra/rrb XXXX
// push -> pa/pb

void ft_push(t_list **lst1, t_list **lst2) // lst1 -> lst2
{
    int tmp;

    if (!lst1 || !lst2)
    {
        return ;
    }
    tmp = (*lst1)->num;
    ft_lstadd_front(lst2, ft_lstnew(tmp));
    ft_lstdel_first(lst1);
    printf("pb\n");
}

t_list *ft_rev_rotate(t_list *lst)
{
    t_list *tmp;
    int n;

    if (!lst)
        return lst;
    if (lst->next)
    {   
        tmp = ft_lstlast(lst);
        n = tmp->num;
        ft_lstadd_front(&lst, ft_lstnew(n));
        ft_lstdel_last(lst);
    }
    printf("rra\n"); 
    return lst;
}

t_list *ft_rotate(t_list *lst)
{
    if (!lst)
        return lst;
    if (lst->next)
    {
        ft_lstadd_back(&lst, ft_lstnew(lst->num));
        lst = lst->next;
    }
    printf("ra\n");
    return lst;
}

void ft_swap(t_list *lst)
{
    int tmp;

    if (!lst)
        return ;
    if (lst->next)
    {
        tmp = lst->num;
        lst->num = lst->next->num;
        lst->next->num = tmp;
    }
    printf("sa\n");
}

void print_stack(t_list *lst)
{
    if (!lst)
        return;
    printf("%d\t", lst->num);
    while (lst->next)
    {
        lst = lst->next;
        printf("%d\t", lst->num);
    }
    printf("\n");
}
