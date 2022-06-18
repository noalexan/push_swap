/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahalexandre <noahalexandre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:00:50 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/17 10:17:51 by noahalexand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	if (argc < 2)
		err();
	stacks.size_a = 0;
	stacks.size_b = 0;
	stacks.a = parse_args(argv + 1, &stacks.size_a);
	stacks.b = NULL;
	first_sort(&stacks);
	system("leaks push_swap");
	return (0);
}
