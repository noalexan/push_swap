/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahalexandre <noahalexandre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:52:33 by noalexan          #+#    #+#             */
/*   Updated: 2022/04/26 20:51:59 by noahalexand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	size_t	i;

	i = -1;
	if (!string)
		return (NULL);
	while (string[++i])
		if (((unsigned char *) string)[i] == (unsigned char) searchedChar)
			return (&((char *) string)[i]);
	if (string[i] == searchedChar)
		return (&((char *) string)[i]);
	return (NULL);
}
