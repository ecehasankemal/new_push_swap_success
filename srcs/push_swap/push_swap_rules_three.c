/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rules_three.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:10:44 by hece              #+#    #+#             */
/*   Updated: 2023/02/18 15:10:46 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void
	ft_rra(t_stack **stack_a, int num)
{
	t_stack	*last;
	t_stack	*second_last;

	last = *stack_a;
	second_last = NULL;
	if (!*stack_a || !(*stack_a)->next)
		return ;
	while (last->next)
	{
		second_last = last;
		last = last->next;
	}
	last->next = *stack_a;
	*stack_a = last;
	second_last->next = NULL;
	if (num == 0)
		write(1, "rra\n", 4);
}

void
	ft_rrb(t_stack **stack_b, int num)
{
	t_stack	*last;
	t_stack	*second_last;

	last = *stack_b;
	second_last = NULL;
	if (!*stack_b || !(*stack_b)->next)
		return ;
	while (last->next)
	{
		second_last = last;
		last = last->next;
	}
	last->next = *stack_b;
	*stack_b = last;
	second_last->next = NULL;
	if (num == 0)
		write(1, "rrb\n", 4);
}

void
	ft_rrr(t_stack **stack_a, t_stack **stack_b, int num)
{
	ft_rra(stack_a, 1);
	ft_rrb(stack_b, 1);
	if (num == 0)
		write(1, "rrr\n", 4);
}
