/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:21:28 by noalexan          #+#    #+#             */
/*   Updated: 2022/05/09 11:43:08 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_group(t_stacks *stacks)
{
	stacks->groups[0].size = stacks->nb_of_args / 3;
	stacks->groups[0].order_max = stacks->groups[0].size;
	stacks->groups[1].size = stacks->nb_of_args / 3;
	stacks->groups[1].order_max = stacks->groups[1].size * 2;
	stacks->groups[2].size = stacks->nb_of_args / 3 + stacks->nb_of_args % 3;
	stacks->groups[2].order_max = stacks->nb_of_args;
}

int	set_min(t_stack *stack)
{
	(void) stack;
	return (0);
}

void	set_order(t_stacks *stacks)
{
	int	i;

	i = -1;
	while (++i < stacks->nb_of_args)
	{
		stacks->a->order = set_min(stacks->a);
		push_b(stacks, 0);
	}
	i = -1;
	while (++i < stacks->nb_of_args)
		push_a(stacks, 0);
}

void	set_group(t_stacks *stacks)
{
	int	i;

	i = -1;
	init_group(stacks);
	set_order(stacks);
	while (++i < stacks->nb_of_args)
	{
		if (stacks->a->order < stacks->groups[0].order_max)
			stacks->a->group = 1;
		else if (stacks->a->order < stacks->groups[1].order_max)
			stacks->a->group = 2;
		else
			stacks->a->group = 3;
		push_b(stacks, 0);
	}
	i = -1;
	while (++i < stacks->nb_of_args)
		push_a(stacks, 0);
}
