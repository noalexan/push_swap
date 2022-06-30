/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:17:06 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/30 11:06:35 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	second_sort_under_250(t_stacks *stacks)
{
	t_way			way;
	unsigned int	i;

	while (stacks->size_b)
	{
		way = find_way(stacks);
		i = 0;
		if (way.direction == 'U')
			while (i++ < way.move)
				reverse_rotate_b(stacks, 1);
		else if (way.direction == 'D')
			while (i++ < way.move)
				rotate_b(stacks, 1);
		push_a(stacks, 1);
	}
}

void	sort_under_250(t_stacks *stacks)
{
	int	i;

	i = 0;
	while (i++ < stacks->size_a + stacks->size_b)
	{
		if (stacks->a->group == 0)
		{
			push_b(stacks, 1);
			rotate_b(stacks, 1);
		}
		else if (stacks->a->group == 1)
			push_b(stacks, 1);
		else
			rotate_a(stacks, 1);
	}
	while (stacks->size_a)
		push_b(stacks, 1);
	second_sort_under_250(stacks);
}

void	sort_over_250(t_stacks *stacks)
{
	int	i;
	int	j;

	j = 0;
	while (j++ < 10)
	{
		i = 0;
		while (i++ < stacks->size_a + stacks->size_b)
		{
			if (stacks->a->place & 1)
				rotate_a(stacks, 1);
			else
				push_b(stacks, 1);
		}
		while (stacks->size_b)
			push_a(stacks, 1);
		i = 0;
		while (i++ < stacks->size_a)
		{
			stacks->a->place >>= 1;
			rotate_a(stacks, 0);
		}
	}
}
