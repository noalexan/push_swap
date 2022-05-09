/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 22:42:38 by noahalexand       #+#    #+#             */
/*   Updated: 2022/05/05 14:22:25 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_a(t_stacks *stacks, int must_print)
{
	t_stack	*tmp;
	t_stack	*next;

	if (must_print)
		ft_printf("sa\n");
	tmp = stacks->a;
	next = stacks->a->next->next;
	stacks->a = stacks->a->next;
	stacks->a->next = tmp;
	stacks->a->next->next = next;
}

void	swap_b(t_stacks *stacks, int must_print)
{
	t_stack	*tmp;
	t_stack	*next;

	if (must_print)
		ft_printf("sb\n");
	tmp = stacks->b;
	next = stacks->b->next->next;
	stacks->b = stacks->b->next;
	stacks->b->next = tmp;
	stacks->b->next->next = next;
}

void	ss(t_stacks *stacks, int must_print)
{
	if (must_print)
		ft_printf("ss\n");
	swap_a(stacks, 0);
	swap_b(stacks, 0);
}
