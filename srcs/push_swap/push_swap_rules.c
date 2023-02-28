/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rules.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:50:46 by hece              #+#    #+#             */
/*   Updated: 2023/02/18 11:50:47 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void
	ft_sa(t_stack **stack_a, int num)
{
	t_stack	*first;
	t_stack	*second;

	first = *stack_a;
	second = NULL;
	if (!*stack_a || !(*stack_a)->next)
		return ;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack_a = second;
	if (num == 0)
		write(1, "sa\n", 3);
}

void
	ft_sb(t_stack **stack_b, int num)
{
	t_stack	*first;
	t_stack	*second;

	first = *stack_b;
	second = NULL;
	if (!*stack_b || !(*stack_b)->next)
		return ;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack_b = second;
	if (num == 0)
		write(1, "sb\n", 3);
}

void
	ft_ss(t_stack **stack_a, t_stack **stack_b, int num)
{
	ft_sa(stack_a, 1);
	ft_sb(stack_b, 1);
	if (num == 0)
		write(1, "ss\n", 3);
}
