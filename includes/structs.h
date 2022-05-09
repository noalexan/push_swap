/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 12:38:42 by noalexan          #+#    #+#             */
/*   Updated: 2022/05/09 10:45:38 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_group
{
	int	order_max;
	int	size;
}		t_group;

typedef struct s_stack
{
	int				value;
	int				group;
	int				index;
	int				order;
	struct s_stack	*next;
}		t_stack;

typedef struct s_stacks
{
	t_stack	*a;
	t_stack	*b;
	t_group	groups[3];
	int		nb_of_args;
}		t_stacks;

#endif
