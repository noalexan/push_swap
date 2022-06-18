/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahalexandre <noahalexandre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:17:06 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/17 14:32:33 by noahalexand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	second_sort(t_stacks *stacks)
{
	t_way			way;
	unsigned int	i;

	while (stacks->size_b)
	{
		way = find_way(stacks->b);
		i = 0;
		if (way.direction == 'U')
			while (i++ < way.move)
				reverse_rotate_b(stacks, 1);
		else if (way.direction == 'D')
			while (i++ < way.move)
				rotate_b(stacks, 1);
		ft_printf(1, "Pushing..\n");
		push_a(stacks, 1);
		ft_printf(1, "\t%d - %d\n", stacks->size_a, stacks->size_b);
	}
	ft_printf(1, "Done\n");
}

void	first_sort(t_stacks *stacks)
{
	while (stacks->size_a)
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
		ft_printf(1, "\t%d - %d\n", stacks->size_a, stacks->size_b);
	}
	while (stacks->size_a)
	{
		push_b(stacks, 1);
		ft_printf(1, "\t%d - %d\n", stacks->size_a, stacks->size_b);
	}
	ft_printf(1, "first sort done\n");
	second_sort(stacks);
}
