/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 20:31:27 by noahalexand       #+#    #+#             */
/*   Updated: 2022/06/16 14:30:08 by noalexan         ###   ########.fr       */
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

typedef struct s_way
{
	unsigned int	move;
	unsigned char	direction;
}	t_way;

t_stack	*parse_args(char **argv, int *nb);
void	check_double(t_stack *stack);
void	set_groups(t_stack *stack);
void	first_sort(t_stacks *stacks);
t_way	find_way(t_stack *stack);
void	push_b(t_stacks *stacks, int must_print);
void	push_a(t_stacks *stacks, int must_print);
int		size_of_stack(t_stack *stack);
void	lst_clear(t_stack *stack);

void	rotate_a(t_stacks *stacks, int must_print);
void	rotate_b(t_stacks *stacks, int must_print);
void	reverse_rotate_a(t_stacks *stacks, int must_print);
void	reverse_rotate_b(t_stacks *stacks, int must_print);
void	rr(t_stacks *stacks, int must_print, int reverse_rotate);

#endif
