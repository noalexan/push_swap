/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   groups.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:05:11 by noahalexand       #+#    #+#             */
/*   Updated: 2022/06/30 11:05:48 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*pre_tri(t_stack *s, int nb_of_args)
{
	int		*tri;
	int		i;
	int		max;
	int		index;
	t_stack	*tmp;

	tri = ft_calloc(nb_of_args, sizeof(int));
	max = get_max(s)->nbr;
	tmp = s;
	i = get_min(s)->nbr;
	index = 0;
	while (index < nb_of_args)
	{
		while (s)
		{
			if (s->nbr == i)
				tri[index++] = s->nbr;
			s = s->next;
		}
		s = tmp;
		i++;
	}
	return (tri);
}

void	set_place(t_stack *s, int nb_of_args)
{
	t_stack	*tmp;
	int		*tri;
	int		place;
	int		i;

	i = 0;
	tmp = s;
	tri = pre_tri(s, nb_of_args);
	place = -1;
	// while (++place < nb_of_args)
		// ft_printf(1, "\t%d\t- %d\n", tri[place], place);
	while (++i < nb_of_args)
	{
		place = -1;
		while (++place < nb_of_args)
		{
			if (tri[place] == s->nbr)
			{
				// ft_printf(1, "%d\t== %d\n", tri[place], s->nbr);
				break ;
			}
		}
		s->place = place;
		ft_printf(1, "%d \t- %d\n", s->nbr, s->place);
		s = s->next;
	}
	free(tri);
	s = tmp;
}

void	set_groups(t_stack *stack, int nb_of_args)
{
	int		index_pivot_1;
	int		index_pivot_2;
	t_stack	*tmp;

	set_place(stack, nb_of_args);
	index_pivot_1 = nb_of_args / 3;
	index_pivot_2 = index_pivot_1 * 2;
	tmp = stack;
	while (stack)
	{
		if (stack->place <= index_pivot_1)
			stack->group = 0;
		else if (stack->place > index_pivot_1 && stack->place < index_pivot_2)
			stack->group = 1;
		else
			stack->group = 2;
		stack = stack->next;
	}
	stack = tmp;
}
