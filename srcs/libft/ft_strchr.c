/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:52:33 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/03 10:12:17 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	size_t	i;

	i = -1;
	if (!string)
		return (NULL);
	while (string[++i])
		if (((unsigned char *)string)[i] == (unsigned char)searchedChar)
			return (&((char *)string)[i]);
	if (string[i] == searchedChar)
		return (&((char *)string)[i]);
	return (NULL);
}
