/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahalexandre <noahalexandre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:48:18 by noalexan          #+#    #+#             */
/*   Updated: 2022/04/26 20:50:47 by noahalexand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t	i;

	i = -1;
	while (++i < size)
		if (((unsigned char *) memoryBlock)[i] == (unsigned char) searchedChar)
			return ((void *) &memoryBlock[i]);
	return (NULL);
}
