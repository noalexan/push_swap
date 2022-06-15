/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:48:03 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/15 16:01:17 by noalexan         ###   ########.fr       */
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
	if (!stacks->b)
		return ;
	if (must_print)
		ft_printf(1, "rb\n");
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
	if (!stacks->b)
		return ;
	if (must_print)
		ft_printf(1, "rrb\n");
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
