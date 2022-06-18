/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   groups.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahalexandre <noahalexandre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:05:11 by noahalexand       #+#    #+#             */
/*   Updated: 2022/06/17 11:56:46 by noahalexand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	set_groups(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (stack)
	{
		stack->group = 1;
		stack = stack->next;
	}
	stack = tmp;
}
