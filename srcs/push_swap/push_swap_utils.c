/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:45:19 by hece              #+#    #+#             */
/*   Updated: 2023/02/16 17:17:28 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack
	*ft_create_new_stack(int nbr)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		ft_error();
	stack->nbr = nbr;
	stack->next = NULL;
	return (stack);
}

int
	ft_atoi(const char *str)
{
	int	iter;
	int	dop;
	int	result;

	iter = 0;
	dop = 1;
	result = 0;
	while ((str[iter] >= '\t' && str[iter] <= '\r') || str[iter] == ' ')
		iter++;
	if (str[iter] == '+' || str[iter] == '-')
	{
		if (str[iter] == '-')
			dop *= -1;
		iter++;
	}
	while (str[iter] >= '0' && str[iter] <= '9' && str[iter] != '\0')
	{
		result = ((str[iter] - '0') + (result * 10));
		iter++;
	}
	if ((dop * iter) > 2147483647 || (dop * iter) < -2147483648)
		ft_error();
	return (result * dop);
}

t_stack
	*ft_split_check(char *av[])
{
	t_stack	*stack_a;
	int		index;
	int		number;
	char	**split;

	index = 0;
	stack_a = NULL;
	split = ft_split(av[1], ' ');
	while (split[index])
	{
		number = ft_atoi(split[index]);
		ft_add_back(&stack_a, ft_create_new_stack(number));
		index++;
	}
	ft_free_str(split);
	free(split);
	return (stack_a);
}

t_stack
	*ft_create_and_fill_stack(int ac, char *av[])
{
	t_stack	*stack_a;
	int		index;
	int		number;

	index = 1;
	stack_a = NULL;
	if (ac < 2)
		exit(1);
	else if (ac == 2)
		stack_a = ft_split_check(av);
	else
	{
		while (index < ac)
		{
			number = ft_atoi(av[index]);
			ft_add_back(&stack_a, ft_create_new_stack(number));
			index++;
		}
	}
	return (stack_a);
}
