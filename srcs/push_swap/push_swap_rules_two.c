/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rules_two.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:40:42 by hece              #+#    #+#             */
/*   Updated: 2023/02/18 14:40:47 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void
	ft_pa(t_stack **stack_a, t_stack **stack_b, int num)
{
	t_stack	*first;

	if (!*stack_b)
		return ;
	first = *stack_b;
	*stack_b = (*stack_b)->next;
	first->next = *stack_a;
	*stack_a = first;
	if (num == 0)
		write(1, "pa\n", 3);
}

void
	ft_pb(t_stack **stack_a, t_stack **stack_b, int num)
{
	t_stack	*first;

	if (!*stack_a)
		return ;
	first = *stack_a;
	*stack_a = (*stack_a)->next;
	first->next = *stack_b;
	*stack_b = first;
	if (num == 0)
		write(1, "pb\n", 3);
}

void
	ft_ra(t_stack **stack_a, int num)
{
	t_stack	*first;
	t_stack	*last;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	first = *stack_a;
	last = *stack_a;
	while (last->next)
		last = last->next;
	(*stack_a) = (*stack_a)->next;
	first->next = NULL;
	last->next = first;
	if (num == 0)
		write(1, "ra\n", 3);
}

void
	ft_rb(t_stack **stack_b, int num)
{
	t_stack	*first;
	t_stack	*last;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	first = *stack_b;
	last = *stack_b;
	while (last->next)
		last = last->next;
	(*stack_b) = (*stack_b)->next;
	first->next = NULL;
	last->next = first;
	if (num == 0)
		write(1, "rb\n", 3);
}

void
	ft_rr(t_stack **stack_a, t_stack **stack_b, int num)
{
	ft_ra(stack_a, 1);
	ft_rb(stack_b, 1);
	if (num == 0)
		write(1, "rr\n", 3);
}
