/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_control.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 15:53:57 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/25 17:33:39 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// sa - swap 2 first elements at the top
void	sa(t_stack *list, int msg)
{
	t_stack tmp;

	if (!list)
		return ;
	if (list->next)
	{
		tmp.data = list->data;
		list->data = list->next->data;
		list->next->data = tmp.data;
		if (msg)
			ft_putstr_fd("sa\n", 1);
	}
}

// sb - swap 2 first elements at the top
void	sb(t_stack *list, int msg)
{
	t_stack tmp;

	if (!list)
		return ;
	if (list->next)
	{
		tmp.data = list->data;
		list->data = list->next->data;
		list->next->data = tmp.data; 
		if (msg)
			ft_putstr_fd("sb\n", 1);
	}
}

// ss - sa and sb at the same time
void	ss(t_stack *list_a, t_stack *list_b)
{
	sa(list_a, 0);
	sb(list_b, 0);
	ft_putstr_fd("ss\n", 1);
}

// pa - push first element of B to the A
//void	pa(t_stack *list_a, t_stack *list_b)
//{
//}

// pb - push first element of A to the B
//void	pb(t_stack *a, t_stack *b)
//{
//	b = a;
//}
