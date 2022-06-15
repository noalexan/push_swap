/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   groups.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:05:11 by noahalexand       #+#    #+#             */
/*   Updated: 2022/06/14 12:15:13 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	set_groups(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (stack)
	{
		stack->group = 0;
		stack = stack->next;
	}
	stack = tmp;
}
