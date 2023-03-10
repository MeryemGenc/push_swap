#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>

typedef struct s_list
{
    int num;
    struct s_list *next;
} t_list;

int ft_atoi(const char *str);
t_list *ft_lstnew(int num);
void ft_lstadd_back(t_list **lst, t_list *new);
t_list *ft_lstlast(t_list *lst);
void ft_lstdelone(t_list *lst);
void print_stack(t_list *lst);
void ft_swap(t_list *lst);
t_list *ft_rotate(t_list *lst);
t_list *ft_rev_rotate(t_list *lst);
void ft_push(t_list **lst1, t_list **lst2);
void ft_lstadd_front(t_list **lst, t_list *new);
void ft_lstdel_last(t_list *lst);
void ft_lstdel_first(t_list **lst);

int ft_lstsize(t_list *lst);

#endif