/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   way.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahalexandre <noahalexandre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:02:48 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/17 14:31:17 by noahalexand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_way	test_way(t_stack *stack, unsigned char direction)
{
	(void) stack;
	if (direction == 'U')
		return ((t_way){.move = 10, .direction = direction});
	else if (direction == 'D')
		return ((t_way){.move = 20, .direction = direction});
	else
		return ((t_way){.move = 0, .direction = 0});
}

t_way	find_way(t_stack *stack)
{
	t_way	up;
	t_way	down;

	up = test_way(stack, 'U');
	down = test_way(stack, 'D');
	if (up.move > down.move)
		return (down);
	else
		return (up);
}
