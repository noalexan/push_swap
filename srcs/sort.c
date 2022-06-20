/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:17:06 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/20 16:58:25 by noalexan         ###   ########.fr       */
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
	while (stacks->size_a)
	{
		ft_printf(1, "\t%d - %d - %d\n", stacks->a->nbr, stacks->a->group,
			stacks->a->place);
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
