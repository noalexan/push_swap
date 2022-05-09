/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahalexandre <noahalexandre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:52:44 by noalexan          #+#    #+#             */
/*   Updated: 2022/04/26 20:51:59 by noahalexand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{
	size_t	i;

	if (!string)
		return (NULL);
	i = ft_strlen(string) + 1;
	while (--i > 0)
		if (((unsigned char *) string)[i] == (unsigned char) searchedChar)
			return (&((char *) string)[i]);
	if (((unsigned char *) string)[i] == (unsigned char) searchedChar)
		return (&((char *) string)[i]);
	return (NULL);
}
