/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_before_last.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:44:44 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/03 10:14:55 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*ft_lst_before_last(t_stack *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next->next != NULL)
		lst = lst->next;
	return (lst);
}
