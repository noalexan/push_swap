/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:17:06 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/14 12:18:46 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	first_sort(t_stacks *stacks)
{
	int	i;

	i = -1;
	while (++i < stacks->nb_of_args)
	{
		if (stacks->a->group == 0)
		{
			push_b(stacks, 1);
		}
	}
}
