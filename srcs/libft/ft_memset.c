/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:52:29 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/03 09:40:48 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t	i;

	i = -1;
	while (++i < count)
		((unsigned char *)pointer)[i] = value;
	return (pointer);
}
