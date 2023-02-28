/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_two.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:11:16 by hece              #+#    #+#             */
/*   Updated: 2023/02/16 17:12:10 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void
	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void
	ft_free(t_stack *stack)
{
	t_stack	*tmp;

	while (stack)
	{
		tmp = (stack)->next;
		(stack)->nbr = 0;
		free(stack);
		stack = tmp;
	}
}

void
	ft_free_str(char **str)
{
	char	*tmp;

	if (!str)
		return ;
	while (*str)
	{
		tmp = *str;
		str++;
		free(tmp);
	}
	*str = NULL;
}
