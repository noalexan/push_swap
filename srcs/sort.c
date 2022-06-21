/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahalexandre <noahalexandre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:17:06 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/21 16:51:31 by noahalexand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	second_sort(t_stacks *stacks)
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

void	first_sort(t_stacks *stacks)
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
	second_sort(stacks);
}
