/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   groups.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:05:11 by noahalexand       #+#    #+#             */
/*   Updated: 2022/06/29 18:08:46 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	set_place(t_stack *stack, int nb_of_args)
{
	t_stack	*min;
	int		place;
	int		i;

	i = 0;
	place = 1;
	min = get_min(stack);
	while (++i < nb_of_args)
	{
		min->place = place++;
		ft_printf(1, "%d\t-\t%d\n", min->nbr, min->place);
		min = get_next_min(stack, min->nbr);
	}
}

void	set_groups(t_stack *stack, int nb_of_args)
{
	int		index_pivot_1;
	int		index_pivot_2;
	t_stack	*tmp;

	set_place(stack, nb_of_args);
	index_pivot_1 = nb_of_args / 3;
	index_pivot_2 = index_pivot_1 * 2;
	tmp = stack;
	while (stack)
	{
		if (stack->place <= index_pivot_1)
			stack->group = 0;
		else if (stack->place > index_pivot_1 && stack->place < index_pivot_2)
			stack->group = 1;
		else
			stack->group = 2;
		stack = stack->next;
	}
	stack = tmp;
}
