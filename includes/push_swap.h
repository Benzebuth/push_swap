/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:51:58 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/28 01:45:42 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define KRED "\x1B[31m"
# define KGRN "\x1B[32m"
# define KYEL "\x1B[33m"
# define KWHT "\x1B[37m"
//Includes

# include "../libft/includes/libft.h"
# include <stdio.h>

//Struct

typedef struct s_node
{
	int				data;
	struct s_node	*next;
	struct s_node	*back;
}	t_node;

typedef struct s_stack
{
	struct s_node	*first;
	struct s_node	*last;
}	t_stack;

//Prototype
t_node	*ft_lastnode(t_node *list);
t_node	*ft_new_node(int nb);
void	ft_addnode_end(t_node **list, t_node *new_node);
t_stack	*init_stack(void);
void	showstack(t_stack **stack_address, int color_option);
void	showstack_multi(t_stack *a, t_stack *b);
void	error_send(void);

// command stack manipulation
void	sa(t_stack *a, int msg);
void	sb(t_stack *b, int msg);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b, int msg);
void	pb(t_stack *a, t_stack *b, int msg);
void	ra(t_stack *a, int msg);
void	rb(t_stack *b, int msg);
void	rr(t_stack *a, t_stack *b);

#endif
