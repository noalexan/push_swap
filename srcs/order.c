/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:21:28 by noalexan          #+#    #+#             */
/*   Updated: 2022/05/11 09:50:58 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_group(t_stacks *stacks)
{
	stacks->size_a = stacks->nb_of_args;
	stacks->size_b = 0;
	stacks->groups[0].size = stacks->nb_of_args / 3;
	stacks->groups[0].order_max = stacks->groups[0].size + 1;
	stacks->groups[1].size = stacks->nb_of_args / 3;
	stacks->groups[1].order_max = stacks->groups[1].size * 2 + 1;
	stacks->groups[2].size = stacks->nb_of_args / 3 + stacks->nb_of_args % 3;
	stacks->groups[2].order_max = stacks->nb_of_args;
}

int	chr_min(t_stacks *stacks)
{
	int		min;
	t_stack	*tmp;

	tmp = stacks->a;
	while (stacks->a)
	{
		min = stacks->a->value;
		stacks->a->order = min;
		stacks->a = stacks->a->next;
	}
	stacks->a = tmp;
	return (min);
}

void	set_order(t_stacks *stacks)
{
	t_stack	*tmp;

	tmp = stacks->a;
	while (stacks->a)
	{
		chr_min(stacks);
		stacks->a = stacks->a->next;
	}
	stacks->a = tmp;
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

void	set_index(t_stacks *stacks)
{
	t_stack	*tmp;
	int		i;

	i = -1;
	tmp = stacks->a;
	while (stacks->a && ++i)
		stacks->a->index = i;
	stacks->a = tmp;
	i = -1;
	tmp = stacks->b;
	while (stacks->b && ++i)
		stacks->b->index = i;
	stacks->b = tmp;
}
