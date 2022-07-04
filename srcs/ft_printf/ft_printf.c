/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:36:18 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/03 10:07:05 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	ft_percent(va_list param, const char character, int fd)
{
	if (character == 's')
		return (ft_putstr(va_arg(param, char *), fd));
	else if (character == 'c')
		return (ft_putchar(va_arg(param, int), fd));
	else if (character == 'd' || character == 'i')
		return (ft_putnbr(va_arg(param, int), fd));
	else if (character == '%')
		return (ft_putchar('%', fd));
	else if (character == 'x')
		return (ft_puthexa(va_arg(param, unsigned int), 0, 0, fd));
	else if (character == 'X')
		return (ft_puthexa(va_arg(param, unsigned int), 1, 0, fd));
	else if (character == 'p')
		return (ft_puthexa(va_arg(param, unsigned long), 0, 1, fd));
	else if (character == 'u')
		return (ft_putunsignednbr(va_arg(param, unsigned int), fd));
	else
		return (0);
}

int	ft_printf(int fd, const char *string, ...)
{
	va_list	param;
	int		i;
	int		size;

	va_start(param, string);
	i = 0;
	size = 0;
	while (string[i])
	{
		if (string[i] == '%')
		{
			i++;
			size += ft_percent(param, string[i], fd);
		}
		else
			size += ft_putchar(string[i], fd);
		i++;
	}
	return (size);
}

void	err(void)
{
	write(2, "error.\n", 8);
	exit(EXIT_FAILURE);
}
