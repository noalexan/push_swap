/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahalexandre <noahalexandre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:22:57 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/17 10:20:29 by noahalexand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_b(t_stacks *stacks, int must_print)
{
	t_stack	*tmp;

	if (stacks->a)
	{
		if (must_print)
			ft_printf(1, "pb\n");
		stacks->size_a--;
		stacks->size_b++;
		tmp = stacks->a;
		stacks->a = stacks->a->next;
		tmp->next = stacks->b;
		stacks->b = tmp;
	}
}

void	push_a(t_stacks *stacks, int must_print)
{
	t_stack	*tmp;

	if (stacks->b)
	{
		if (must_print)
			ft_printf(1, "pa\n");
		stacks->size_b--;
		stacks->size_a++;
		tmp = stacks->b;
		stacks->b = stacks->b->next;
		tmp->next = stacks->a;
		stacks->a = tmp;
	}
}
