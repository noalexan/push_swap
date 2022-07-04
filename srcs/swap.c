/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 09:16:49 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/28 16:12:10 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_a(t_stacks *stacks, int must_print)
{
	t_stack	*tmp;

	if (stacks->a && stacks->a->next)
	{
		if (must_print)
			ft_printf(1, "sa\n");
		tmp = stacks->a;
		stacks->a = tmp->next;
		tmp->next = stacks->a->next;
		stacks->a->next = tmp;
	}
}

void	swap_b(t_stacks *stacks, int must_print)
{
	t_stack	*tmp;

	if (stacks->b && stacks->b->next)
	{
		if (must_print)
			ft_printf(1, "sb\n");
		tmp = stacks->b;
		stacks->b = tmp->next;
		tmp->next = stacks->b->next;
		stacks->b->next = tmp;
	}
}
