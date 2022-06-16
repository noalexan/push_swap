/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:48:03 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/16 15:02:22 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_stacks *stacks, int must_print)
{
	if (!stacks->a)
		return ;
	if (must_print)
		ft_printf(1, "ra\n");
}

void	rotate_b(t_stacks *stacks, int must_print)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!stacks->b)
		return ;
	if (must_print)
		ft_printf(1, "rb\n");
	tmp = stacks->b;
	stacks->b = stacks->b->next;
	tmp->next = NULL;
	last = ft_lstlast(stacks->b);
	ft_printf(1, "Here\n");
	last->next = tmp;
}

void	reverse_rotate_a(t_stacks *stacks, int must_print)
{
	if (!stacks->a)
		return ;
	if (must_print)
		ft_printf(1, "rra\n");
}

void	reverse_rotate_b(t_stacks *stacks, int must_print)
{
	t_stack	*tmp;

	if (!stacks->b)
		return ;
	if (must_print)
		ft_printf(1, "rrb\n");
	tmp = ft_lstlast(stacks->b);
	ft_lst_before_last(stacks->b)->next = NULL;
	tmp->next = stacks->b;
	stacks->b = tmp;
}

void	rr(t_stacks *stacks, int must_print, int reverse_rotate)
{
	if (reverse_rotate)
	{
		if (must_print)
			ft_printf(1, "rrr\n");
		reverse_rotate_a(stacks, 0);
		reverse_rotate_b(stacks, 0);
	}
	else
	{
		if (must_print)
			ft_printf(1, "rr\n");
		rotate_a(stacks, 0);
		rotate_b(stacks, 0);
	}
}
