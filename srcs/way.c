/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   way.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:02:48 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/20 11:44:57 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_max(t_stack *lst)
{
	int	max;

	max = lst->nbr;
	while (lst)
	{
		if (lst->nbr > max)
			max = lst->nbr;
		lst = lst->next;
	}
	return (max);
}

t_way	test_way(t_stacks *stacks, unsigned char direction)
{
	int	start;
	int	move;
	int	max;

	max = find_max(stacks->b);
	move = 0;
	start = stacks->b->nbr;
	while (stacks->b->nbr != max)
	{
		move++;
		if (direction == 'U')
			reverse_rotate_b(stacks, 0);
		else if (direction == 'D')
			rotate_b(stacks, 0);
	}
	while (stacks->b->nbr != start)
		rotate_b(stacks, 0);
	return ((t_way){.move = move, .direction = direction});
}

t_way	find_way(t_stacks *stacks)
{
	t_way	up;
	t_way	down;

	up = test_way(stacks, 'U');
	down = test_way(stacks, 'D');
	if (up.move > down.move)
		return (down);
	else
		return (up);
}
