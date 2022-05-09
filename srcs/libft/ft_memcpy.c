/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahalexandre <noahalexandre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:52:23 by noalexan          #+#    #+#             */
/*   Updated: 2022/04/26 20:50:57 by noahalexand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	char	*a;
	char	*b;
	size_t	i;

	i = 0;
	a = (char *) destination;
	b = (char *) source;
	while (i < size)
	{
		a[i] = b[i];
		i++;
	}
	return (destination);
}
