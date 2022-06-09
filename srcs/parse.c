/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:31:41 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/09 15:36:10 by noalexan         ###   ########.fr       */
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

t_stack	*parse_args2(char **argv, int *nb)
{
	t_stack	*stack;

	if (!argv[0])
		return (NULL);
	*nb += 1;
	stack = parse_args3(ft_atoi(*argv));
	stack->next = parse_args2(argv + 1, nb);
	free(argv[0]);
	return (stack);
}

t_stack	*parse_args(char **argv, int *nb)
{
	t_stack	*stack;
	char	**split;

	if (!*argv)
		return (NULL);
	split = ft_split(*argv, ' ');
	stack = parse_args2(split, nb);
	free(split);
	ft_lstlast(stack)->next = parse_args(argv + 1, nb);
	check_double(stack);
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
