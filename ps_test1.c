#include "push_swap.h" 


int main(int argc, char **argv)
{
    int i;
    t_list *stack_A; 
    t_list *stack_B; 
    //t_list *stack_B; 

    if (argc <= 1)
    {
        printf("No Input !!!");
        return 1;
    } 
    stack_A = ft_lstnew(ft_atoi(argv[1])); // dongu icinde olusturamadim.? -> lst_new bak?
    stack_B = ft_lstnew(333); // bunu baska bi yerde olustur. Burada ne alaka?
    i = 2; 

    while (i < argc)
    {
        ft_lstadd_front(&stack_A, ft_lstnew(ft_atoi(argv[i])));
        i++;
    }
    print_stack(stack_A);
    ft_swap(stack_A);
    print_stack(stack_A);
    stack_A = ft_rotate(stack_A);
    print_stack(stack_A);
    stack_A = ft_rev_rotate(stack_A);
    print_stack(stack_A);
    print_stack(stack_B);
    ft_push(&stack_A, &stack_B);
    print_stack(stack_A);
    print_stack(stack_B);
    ft_push(&stack_B, &stack_A);
    print_stack(stack_A);
    print_stack(stack_B);

    return 0;
}