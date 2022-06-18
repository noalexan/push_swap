/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahalexandre <noahalexandre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:48:03 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/17 14:52:26 by noahalexand      ###   ########.fr       */
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
	if (!stacks->a)
		return ;
	if (must_print)
		ft_printf(1, "rra\n");
}

// Ne marche pas

void	reverse_rotate_b(t_stacks *stacks, int must_print)
{
 	t_stack	*tmp;

 	if (!stacks->b)
 		return ;
 	if (must_print)
 		ft_printf(1, "rrb\n");
 	tmp = ft_lstlast(stacks->b);
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
