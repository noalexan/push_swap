/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 20:31:27 by noahalexand       #+#    #+#             */
/*   Updated: 2022/06/27 16:10:39 by noalexan         ###   ########.fr       */
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
int		sorted(t_stack *stack);
void	set_groups(t_stack *stack, int nb_of_args);
t_way	find_way(t_stacks *stacks);
int		size_of_stack(t_stack *stack);
void	lst_clear(t_stack *stack);

void	sort_under_250(t_stacks *stacks);
void	sort_over_250(t_stacks *stacks);

void	special_3(t_stacks *stacks);
void	special_5(t_stacks *stacks);

t_stack	*get_max(t_stack *lst);
t_stack	*get_next_max(t_stack *lst, int _max);
t_stack	*get_min(t_stack *lst);
t_stack	*get_next_min(t_stack *lst, int _min);

void	push_b(t_stacks *stacks, int must_print);
void	push_a(t_stacks *stacks, int must_print);

void	rotate_a(t_stacks *stacks, int must_print);
void	rotate_b(t_stacks *stacks, int must_print);
void	reverse_rotate_a(t_stacks *stacks, int must_print);
void	reverse_rotate_b(t_stacks *stacks, int must_print);
void	rr(t_stacks *stacks, int must_print, int reverse_rotate);

#endif
