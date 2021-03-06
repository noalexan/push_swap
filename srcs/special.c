/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:11:42 by noalexan          #+#    #+#             */
/*   Updated: 2022/07/04 10:50:06 by noalexan         ###   ########.fr       */
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

void	special_5(t_stacks *s)
{
	if (s->a->place == 4 && s->a->next->place == 3
		&& s->a->next->next->place == 2 && s->a->next->next->next->place == 1)
		reverse_rotate_a(s, 1);
	else if (s->a->place == 2 && s->a->next->place == 4
		&& s->a->next->next->place == 3 && s->a->next->next->next->place == 1)
		reverse_rotate_a(s, 1);
	while (s->a->nbr != get_min(s->a)->nbr)
		rotate_a(s, 1);
	push_b(s, 1);
	while (s->a->nbr != get_min(s->a)->nbr)
		rotate_a(s, 1);
	push_b(s, 1);
	if (!sorted(s->a))
		special_3(s);
	push_a(s, 1);
	push_a(s, 1);
}
