/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:00:50 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/03 17:47:39 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	if (argc < 2)
		err();
	stacks.nb_of_args = 0;
	stacks.a = parse_args(argv + 1, &stacks.nb_of_args);
	stacks.b = NULL;
	sort(&stacks);
	lst_clear(stacks.a);
	system("leaks push_swap");
	return (0);
}
