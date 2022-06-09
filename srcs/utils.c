/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:49:54 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/09 11:29:25 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	size_of_stack(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

void	check_double(t_stack *stack)
{
	t_stack	*tmp;

	while (stack)
	{
		tmp = stack->next;
		while (tmp)
		{
			if (tmp->nbr == stack->nbr)
				err();
			tmp = tmp->next;
		}
		stack = stack->next;
	}
}

t_stack	*get_min_value(int nb, t_stack *stack)
{
	t_stack	*min;

	return (min);
}

t_stack	*get_next_value(t_stack *stack, int first)
{
	int	j;
	int	i;
	int	min;

	j = first + 1;
	i = -1;
	min = get_min_value(stack)->nbr;
	while (j > min)
	{
	}
	return (NULL);
}
