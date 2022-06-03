/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 20:31:27 by noahalexand       #+#    #+#             */
/*   Updated: 2022/06/03 17:18:55 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"
# include "get_next_line.h"

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

t_stack	*parse_args(char **argv, int *nb);
void	check_double(t_stack *stack);
void	sort(t_stacks *stacks);
void	push_b(t_stacks *stacks, int must_print);
int		size_of_stack(t_stack *stack);
void	lst_clear(t_stack *stack);

#endif
