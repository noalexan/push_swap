/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:17:06 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/07 12:06:55 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

typedef struct s_way
{
	unsigned char	direction;
	int				move;
}		t_way;

t_way	count_move_to_do(t_stacks *stacks, char direction)
{
	(void) stacks;
	if (direction == 'U')
	{
		return ((t_way){direction, 10});
	}
	else
	{
		return ((t_way){direction, 5});
	}
}

t_way	find_fastest_way(t_stacks *stacks)
{
	t_way	up;
	t_way	down;

	up = count_move_to_do(stacks, 'U');
	down = count_move_to_do(stacks, 'D');
	if (up.move <= down.move)
		return (up);
	else
		return (down);
}

void	sort(t_stacks *stacks)
{
	int	i;

	i = -1;
	while (++i < stacks->nb_of_args)
		push_b(stacks, 1);
	i = -1;
	while (++i < stacks->nb_of_args)
	{
		
	}
}
