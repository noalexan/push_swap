/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:31:41 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/03 16:10:34 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*parse_args3(int nb)
{
	t_stack	*stack;

	stack = ft_calloc(1, sizeof(t_stack));
	stack->nbr = nb;
	stack->next = NULL;
	return (stack);
}

t_stack	*parse_args2(char **argv)
{
	t_stack	*stack;

	if (!argv[0])
		return (NULL);
	stack = parse_args3(ft_atoi(argv[0]));
	stack->next = parse_args2(argv + 1);
	free(argv[0]);
	return (stack);
}

t_stack	*parse_args(char **argv)
{
	t_stack	*stack;
	char	**split;

	if (!argv[0])
		return (NULL);
	split = ft_split(argv[0], ' ');
	stack = parse_args2(split);
	free(split);
	ft_lstlast(stack)->next = parse_args(argv + 1);
	return (stack);
}

void	lst_clear(t_stack *stack)
{
	if (stack)
	{
		lst_clear(stack->next);
		free(stack);
	}
}
