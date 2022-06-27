/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:00:50 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/27 16:11:26 by noalexan         ###   ########.fr       */
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
	if (sorted(stacks.a))
		exit(EXIT_SUCCESS);
	stacks.b = NULL;
	if (stacks.size_a == 3)
		special_3(&stacks);
	else if (stacks.size_a == 5)
		special_5(&stacks);
	else if (stacks.size_a <= 250)
		sort_under_250(&stacks);
	else
		sort_over_250(&stacks);
	return (0);
}
