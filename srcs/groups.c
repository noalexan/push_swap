/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   groups.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:05:11 by noahalexand       #+#    #+#             */
/*   Updated: 2022/06/20 17:11:21 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	set_place(t_stack *stack)
{
	t_stack	*tmp;
	int		place;

	place = 0;
	tmp = stack;
	while (stack)
	{
		stack->place = place;
		stack = stack->next;
	}
	stack = tmp;
}

void	set_pivot(t_stack *stack)
{
	set_place(stack);
}

void	set_groups(t_stack *stack)
{
	t_stack	*tmp;

	set_pivot(stack);
	tmp = stack;
	while (stack)
	{
		stack->group = 0;
		stack = stack->next;
	}
	stack = tmp;
}
