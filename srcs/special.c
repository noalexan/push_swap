/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:11:42 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/27 17:52:53 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	special_3(t_stacks *stacks)
{
	if (!(stacks->a->place - 1))
		ft_printf(1, "sa\nra\n");
	else if ((stacks->a->place - 1) == 1)
	{
		if (!(stacks->a->next->place - 1))
			ft_printf(1, "sa\n");
		else
			ft_printf(1, "ra\n");
	}
	else
	{
		if (!(stacks->a->next->place - 1))
			ft_printf(1, "ra\n");
		else
			ft_printf(1, "sa\nrra\n");
	}
}

/*

	1 2 3 - .
	1 3 2 -> 3 1 2 -> 1 2 3 - sa ra
	2 1 3 -> 1 2 3 - sa
	2 3 1 -> 1 2 3 - ra
	3 1 2 -> 1 2 3 - rra
	3 2 1 -> 2 3 1 -> 1 2 3 - sa rra

*/

void	special_5(t_stacks *stacks)
{
	(void) stacks;
}

/*


*/
