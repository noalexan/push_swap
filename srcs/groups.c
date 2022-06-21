/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   groups.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahalexandre <noahalexandre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:05:11 by noahalexand       #+#    #+#             */
/*   Updated: 2022/06/21 16:42:23 by noahalexand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	set_place(t_stack *stack, int nb_of_args)
{
	t_stack	*tmp;
	int		place;
	int		i;

	place = 0;
	tmp = get_min(stack);
	i = 0;
	while (++i < nb_of_args)
	{
		tmp->place = tmp->nbr;
		tmp = get_next_min(stack, tmp->nbr);
		place++;
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