/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:01:07 by hece              #+#    #+#             */
/*   Updated: 2023/02/16 17:09:12 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../gnl/get_next_line.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_stack
{
	int				nbr;
	struct s_stack	*next;
}

#endif