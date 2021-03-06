/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:00:50 by noalexan          #+#    #+#             */
/*   Updated: 2022/07/04 13:58:58 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stacks	push_swap(char **argv)
{
	t_stacks	stacks;

	stacks.size_a = 0;
	stacks.size_b = 0;
	stacks.a = parse_args(argv, &stacks.size_a);
	stacks.b = NULL;
	set_groups(stacks.a, stacks.size_a);
	if (sorted(stacks.a))
		return (stacks);
	if (stacks.size_a == 3)
		special_3(&stacks);
	else if (stacks.size_a == 5)
		special_5(&stacks);
	else if (stacks.size_a <= 250)
		sort_under_250(&stacks);
	else
		sort_over_250(&stacks);
	return (stacks);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		err();
	push_swap(argv + 1);
	return (0);
}
