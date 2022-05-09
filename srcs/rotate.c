/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:48:03 by noalexan          #+#    #+#             */
/*   Updated: 2022/05/05 17:42:26 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_stacks *stacks, int must_print)
{
	t_stack	*tmp;

	if (!stacks->a)
		return ;
	if (must_print)
		ft_printf("ra\n");
	tmp = stacks->a;
	stacks->a = stacks->a->next;
	ft_lstadd_back(&stacks->a, ft_lstnew(tmp->value));
}

void	rotate_b(t_stacks *stacks, int must_print)
{
	t_stack	*tmp;

	if (!stacks->b)
		return ;
	if (must_print)
		ft_printf("rb\n");
	tmp = stacks->b;
	stacks->b = stacks->b->next;
	ft_lstadd_back(&stacks->b, ft_lstnew(tmp->value));
}

void	reverse_rotate_a(t_stacks *stacks, int must_print)
{
	t_stack	*tmp;

	if (!stacks->a)
		return ;
	if (must_print)
		ft_printf("rra\n");
	tmp = ft_lstnew(ft_lstlast(stacks->a)->value);
	tmp->group = ft_lstlast(stacks->a)->group;
	tmp->next = stacks->a;
	stacks->a = tmp;
	ft_lst_before_last(stacks->a)->next = NULL;
}

void	reverse_rotate_b(t_stacks *stacks, int must_print)
{
	t_stack	*tmp;

	if (!stacks->b)
		return ;
	if (must_print)
		ft_printf("rrb\n");
	tmp = ft_lstnew(ft_lstlast(stacks->b)->value);
	tmp->group = ft_lstlast(stacks->b)->group;
	tmp->next = stacks->b;
	stacks->b = tmp;
	ft_lst_before_last(stacks->b)->next = NULL;
}

void	rr(t_stacks *stacks, int must_print, int reverse_rotate)
{
	if (reverse_rotate)
	{
		if (must_print)
			ft_printf("rrr\n");
		reverse_rotate_a(stacks, 0);
		reverse_rotate_b(stacks, 0);
	}
	else
	{
		if (must_print)
			ft_printf("rr\n");
		rotate_a(stacks, 0);
		rotate_b(stacks, 0);
	}
}
