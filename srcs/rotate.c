/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:48:03 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/28 15:56:50 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_stacks *stacks, int must_print)
{
	t_stack	*rotate;

	if (!stacks->a)
		return ;
	if (must_print)
		ft_printf(1, "ra\n");
	rotate = stacks->a;
	stacks->a = stacks->a->next;
	rotate->next = NULL;
	ft_lstadd_back(&stacks->a, rotate);
}

void	rotate_b(t_stacks *stacks, int must_print)
{
	t_stack	*rotate;

	if (!stacks->b)
		return ;
	if (must_print)
		ft_printf(1, "rb\n");
	rotate = stacks->b;
	stacks->b = stacks->b->next;
	rotate->next = NULL;
	ft_lstadd_back(&stacks->b, rotate);
}

void	reverse_rotate_a(t_stacks *stacks, int must_print)
{
	t_stack	*tmp;
	t_stack	*beforelast;

	if (!stacks->a)
		return ;
	if (must_print)
		ft_printf(1, "rra\n");
	beforelast = ft_lst_before_last(stacks->a);
	tmp = ft_lstlast(stacks->a);
	tmp->next = stacks->a;
	stacks->a = tmp;
	beforelast->next = NULL;
}

void	reverse_rotate_b(t_stacks *stacks, int must_print)
{
	t_stack	*tmp;
	t_stack	*beforelast;

	if (!stacks->b)
		return ;
	if (must_print)
		ft_printf(1, "rrb\n");
	beforelast = ft_lst_before_last(stacks->b);
	tmp = ft_lstlast(stacks->b);
	tmp->next = stacks->b;
	stacks->b = tmp;
	beforelast->next = NULL;
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
