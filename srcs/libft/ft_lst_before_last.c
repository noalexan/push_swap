/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_before_last.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahalexandre <noahalexandre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:44:44 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/17 12:51:35 by noahalexand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*ft_lst_before_last(t_stack *lst)
{
	if (lst == NULL)
		return (NULL);
	if (lst && lst->next)
	{
		while (lst->next->next)
		{
			lst = lst->next;
			ft_printf(1, "Hello\n");
		}
	}
	return (lst);
}
