/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 20:01:57 by noahalexand       #+#    #+#             */
/*   Updated: 2022/05/11 11:56:59 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*parse_args(char **argv, int *nb)
{
	t_stack	*stack;
	int		i;

	if (!argv[0])
		return (NULL);
	i = -1;
	stack = NULL;
	stack = ft_lstnew(ft_atoi(argv[0]), *nb, 0, parse_args(argv + 1, nb));
	*nb += 1;
	return (stack);
}

// t_stack	*parse_argv(char **argv, int *nb)
// {
// 	t_stack	*stack;
// 	int		i;

// 	i = 1;
// 	stack = parse_args(ft_split(argv[i], ' '), &nb);
// 	while (argv[++i])
// 		ft_lstlast(stack)->next = parse_args(ft_split(argv[i], ' '), &nb);
// 	check_double(stack);
// 	return (stack);
// }

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	(void) argc;
	stacks.nb_of_args = 0;
	stacks.a = parse_args(argv, &stacks.nb_of_args);
	if (stacks.nb_of_args < 2)
		err();
	stacks.b = NULL;
	if (!stacks.a)
		err();
	set_group(&stacks);
	first_sort(&stacks);
	ft_lstclear(stacks.a);
	system("leaks push_swap");
	exit(EXIT_SUCCESS);
}
