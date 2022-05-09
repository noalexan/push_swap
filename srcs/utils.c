/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:07:42 by noalexan          #+#    #+#             */
/*   Updated: 2022/05/05 14:12:12 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_stack(t_stacks stacks)
{
	ft_printf("====== A ======\n");
	while (stacks.a)
	{
		ft_printf("| %d\n", stacks.a->value);
		stacks.a = stacks.a->next;
	}
	ft_printf("------ B ------\n");
	while (stacks.b)
	{
		ft_printf("| %d\n", stacks.b->value);
		stacks.b = stacks.b->next;
	}
	ft_printf("===============\n");
}

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
			if (tmp->value == stack->value)
				err();
			tmp = tmp->next;
		}
		stack = stack->next;
	}
}
