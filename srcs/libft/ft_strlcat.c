/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:52:35 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/03 10:15:58 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

size_t	ft_strlcat(char *destination, const char *source, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(destination) >= size)
		return (size + ft_strlen(source));
	j = ft_strlen(destination);
	while (source[i] != '\0' && j + 1 < size)
	{
		((char *)destination)[j] = ((char *)source)[i];
		i++;
		j++;
	}
	destination[j] = '\0';
	return (ft_strlen(destination) + ft_strlen(&source[i]));
}
