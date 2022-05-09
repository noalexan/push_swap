/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:47:19 by noalexan          #+#    #+#             */
/*   Updated: 2022/05/09 11:13:19 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	second_sort(t_stacks *stacks)
{
	int	i;

	i = -1;
	while (++i < stacks->nb_of_args)
	{
		push_a(stacks, 1);
	}
}

void	first_sort(t_stacks *stacks)
{
	int	i;

	i = -1;
	while (++i < stacks->nb_of_args)
	{
		if (stacks->a->group == 1)
		{
			push_b(stacks, 1);
			rotate_b(stacks, 1);
		}
		else if (stacks->a->group == 2)
			push_b(stacks, 1);
	}
	i = -1;
	while (++i < stacks->nb_of_args)
		push_b(stacks, 1);
	second_sort(stacks);
}
