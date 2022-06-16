/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:17:06 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/16 16:16:49 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	second_sort(t_stacks *stacks)
{
	t_way			way;
	unsigned int	i;
	int				c;

	c = -1;
	while (++c < stacks->nb_of_args)
	{
		way = find_way(stacks->b);
		i = 0;
		// while (++i < way.move)
		// {
		// 	if (way.direction == 'U')
		// 		rotate_b(stacks, 1);
		// 	else
		// 		reverse_rotate_b(stacks, 1);
		// }
		push_a(stacks, 1);
	}
}

void	first_sort(t_stacks *stacks)
{
	int	i;

	i = -1;
	while (++i < stacks->nb_of_args)
	{
		if (stacks->a->group == 0)
		{
			push_b(stacks, 1);
			rotate_b(stacks, 1);
		}
		else if (stacks->a->group == 1)
			push_b(stacks, 1);
	}
	while (++i <= stacks->nb_of_args)
		push_b(stacks, 1);
	second_sort(stacks);
}
