/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:05:46 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/20 16:49:35 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*get_max(t_stack *lst)
{
	t_stack	*max;

	max = lst;
	while (lst)
	{
		if (lst->nbr > max->nbr)
			max = lst;
		lst = lst->next;
	}
	return (max);
}

t_stack	*get_next_max(t_stack *lst, int _max)
{
	t_stack	*max;

	max = lst;
	while (lst)
	{
		if (lst->nbr < _max && lst->nbr > max->nbr)
			max = lst;
		lst = lst->next;
	}
	return (max);
}

t_stack	*get_next_min(t_stack *lst, int _min)
{
	t_stack	*min;

	min = lst;
	while (lst)
	{
		if (lst->nbr > _min && lst->nbr > min->nbr)
			min = lst;
		lst = lst->next;
	}
	return (min);
}

t_stack	*get_min(t_stack *lst)
{
	t_stack	*min;

	min = lst;
	while (lst)
	{
		if (lst->nbr > min->nbr)
			min = lst;
		lst = lst->next;
	}
	return (min);
}
