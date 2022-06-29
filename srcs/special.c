/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:11:42 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/29 13:23:24 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	special_3(t_stacks *s)
{
	if (s->a->nbr < s->a->next->nbr && s->a->nbr < s->a->next->next->nbr)
	{
		swap_a(s, 1);
		rotate_a(s, 1);
	}
	else if (s->a->nbr > s->a->next->nbr && s->a->nbr > s->a->next->next->nbr)
	{
		if (s->a->next->nbr < s->a->next->next->nbr)
			rotate_a(s, 1);
		else
		{
			swap_a(s, 1);
			reverse_rotate_a(s, 1);
		}
	}
	else
	{
		if (s->a->next->nbr < s->a->next->next->nbr)
			swap_a(s, 1);
		else
			reverse_rotate_a(s, 1);
	}
}

void	add_nb(t_stacks *s)
{
	if (s->b->nbr > s->a->nbr)
	{
		rotate_a(s, 1);
		if (s->b->nbr > s->a->nbr)
		{
			rotate_a(s, 1);
			if (s->b->nbr > s->a->nbr)
			{
				rotate_a(s, 1);
				if (s->a->next->next->next)
				{
					if (s->b->nbr > s->a->nbr)
					{
						rotate_a(s, 1);
					}
				}
			}
		}
	}
	push_a(s, 1);
}

void	reset_pos(t_stacks *s)
{
	int	min;

	min = get_min(s->a)->nbr;
	while (s->a->nbr != min)
		rotate_a(s, 1);
}

void	special_5(t_stacks *s)
{
	// cherche le plus petit push 
	// cherche le 2 plus petit push 
	push_b(s, 1);
	push_b(s, 1);
	if (!sorted(s->a))
		special_3(s);
	add_nb(s);
	reset_pos(s);
	add_nb(s);
	reset_pos(s);
}
