/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:05:20 by hece              #+#    #+#             */
/*   Updated: 2023/02/16 14:46:31 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int
	main(int ac, char *av[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (!ft_check_args(ac, av))
		ft_error();
	stack_a = ft_create_and_fill_stack(ac, av);
	if (!stack_a || ft_is_duplicate(stack_a))
	{
		ft_free(stack_a);
		ft_error();
	}
	if (!ft_is_sorted(stack_a))
		ft_sort(&stack_a, &stack_b);
	ft_free(stack_a);
	return (0);
}
