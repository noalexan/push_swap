/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 20:31:27 by noahalexand       #+#    #+#             */
/*   Updated: 2022/05/11 09:51:50 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"
# include "get_next_line.h"
# include "structs.h"

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

/* ============== UTILS ============== */

void	print_stack(t_stacks stacks);
int		size_of_stack(t_stack *stack);
int		nb_of_chunck(t_stack *stack);
void	check_double(t_stack *stack);
void	set_group(t_stacks *stacks);
void	set_index(t_stacks *stacks);

/* ============== SORT =============== */

void	first_sort(t_stacks *stacks);

/* ============== SWAP =============== */

void	swap_a(t_stacks *stacks, int must_print);
void	swap_b(t_stacks *stacks, int must_print);
void	ss(t_stacks *stacks, int must_print);

/* ============== PUSH =============== */

void	push_b(t_stacks *stacks, int must_print);
void	push_a(t_stacks *stacks, int must_print);

/* ============= ROTATE ============== */

void	rotate_a(t_stacks *stacks, int must_print);
void	rotate_b(t_stacks *stacks, int must_print);
void	reverse_rotate_a(t_stacks *stacks, int must_print);
void	reverse_rotate_b(t_stacks *stacks, int must_print);
void	rr(t_stacks *stacks, int must_print, int reverse_rotate);

/* =================================== */

#endif
