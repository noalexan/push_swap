/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:33:43 by noalexan          #+#    #+#             */
/*   Updated: 2022/05/11 09:52:12 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_b(t_stacks *stacks, int must_print)
{
	t_stack	*tmp;

	if (stacks->a)
	{
		if (must_print)
			ft_printf("pb\n");
		tmp = stacks->a;
		stacks->a = stacks->a->next;
		tmp->next = stacks->b;
		stacks->b = tmp;
		stacks->size_a--;
		stacks->size_b++;
		set_index(stacks);
	}
}

void	push_a(t_stacks *stacks, int must_print)
{
	t_stack	*tmp;

	if (stacks->b)
	{
		if (must_print)
			ft_printf("pa\n");
		tmp = stacks->b;
		stacks->b = stacks->b->next;
		tmp->next = stacks->a;
		stacks->a = tmp;
		stacks->size_a++;
		stacks->size_b--;
		set_index(stacks);
	}
}
