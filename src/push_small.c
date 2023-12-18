/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <mgencali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:49:08 by mgencali          #+#    #+#             */
/*   Updated: 2023/05/09 15:58:07 by mgencali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push_small_a(t_list **stack_a, t_list **stack_b, int flag)
{
	t_list	*head;

	head = *stack_a;
	while (head->next != NULL)
	{
		if ((head->index == 0 && flag == 0) || (head->index == 1 && flag == 1))
		{
			pb(stack_a, stack_b);
			break ;
		}
		ra(stack_a);
		head = *stack_a;
	}
}
