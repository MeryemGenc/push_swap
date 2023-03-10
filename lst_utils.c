#include "push_swap.h"


t_list *ft_lstnew(int num)
{
    t_list *ret;

    ret = malloc(sizeof(t_list));
    if (!ret)
        return (0);
    ret->num = num;
    ret->next = NULL;
    return (ret);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *tmp;

    tmp = ft_lstlast(*lst);
    if (!tmp)
        *lst = new;
    else
        tmp->next = new;
}

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (0);
    while (lst->next)
        lst = lst->next;
    return (lst);
}

void ft_lstdel_last(t_list *lst)
{
    if (!lst)
        return ;
    while (lst->next->next)
        lst = lst->next;
    lst->next = NULL;
}

void ft_lstdel_first(t_list **lst)
{
    if (!(*lst))
        return ;
    if ((*lst)->next)
    { 
        *lst = (*lst)->next;
    }
    else
    {
        (*lst)->num = 0;
        free(*lst);
    }
}

void ft_lstdelone(t_list *lst)
{
    if (lst)
    {
        lst->num = 0;
        free(lst);
    }
}

int ft_lstsize(t_list *lst)
{
    int ret;

    ret = 0;
    while (lst && ++ret)
        lst = lst->next;
    return (ret);
}

// void ft_lstiter(t_list *lst, void (*f)(void *))
// {
//     while (lst)
//     {
//         f(lst->num);
//         lst = lst->next;
//     }
// }

// void ft_lstclear(t_list **lst, void (*del)(void *))
// {
//     if (lst && *lst)
//     {
//         ft_lstclear(&(*lst)->next, del);
//         ft_lstdelone(*lst, del);
//         *lst = 0;
//     }
// }

// t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
//     t_list *ret;
//     t_list *tmp;

//     ret = 0;
//     while (lst)
//     {
//         tmp = ft_lstnew(f(lst->num));
//         if (!tmp)
//         {
//             ft_lstclear(&ret, del);
//             return (0);
//         }
//         ft_lstadd_back(&ret, tmp);
//         lst = lst->next;
//     }
//     return (ret);
// }



