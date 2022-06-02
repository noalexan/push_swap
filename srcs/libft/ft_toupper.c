/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:52:48 by noalexan          #+#    #+#             */
/*   Updated: 2022/03/23 09:52:50 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int character)
{
	if (97 <= character && character <= 122)
		return (character - 32);
	return (character);
}