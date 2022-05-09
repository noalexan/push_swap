/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 20:01:57 by noahalexand       #+#    #+#             */
/*   Updated: 2022/05/09 11:30:08 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*parse_args(char **argv, int **nb)
{
	t_stack	*stack;
	int		i;

	if (!argv[0])
		return (NULL);
	i = -1;
	stack = NULL;
	stack = ft_lstnew(ft_atoi(argv[0]));
	stack->index = **nb;
	**nb += 1;
	stack->next = parse_args(argv + 1, nb);
	return (stack);
}

t_stack	*parse_argv(char **argv, int *nb)
{
	t_stack	*stack;
	t_stack	*tmp;
	int		i;

	i = 1;
	stack = parse_args(ft_split(argv[i], ' '), &nb);
	while (argv[++i])
	{
		tmp = ft_lstlast(stack);
		tmp->next = parse_args(ft_split(argv[i], ' '), &nb);
	}
	check_double(stack);
	return (stack);
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	if (argc < 3)
		err();
	stacks.nb_of_args = 0;
	stacks.a = parse_argv(argv, &stacks.nb_of_args);
	stacks.b = NULL;
	if (!stacks.a)
		err();
	set_group(&stacks);
	first_sort(&stacks);
	ft_lstclear(stacks.a);
	ft_lstclear(stacks.b);
	exit(EXIT_SUCCESS);
}
