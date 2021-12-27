/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_cmd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:13:00 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/27 21:01:38 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a, int msg)
{
	int	tmp;

	if (!a)
		return ;
	tmp = 0;
	if (a->first && a->first->next)
	{
		tmp = a->first->data;
		a->first->data = a->first->next->data;
		a->first->next->data = tmp;
		if (msg)
			ft_putstr_fd("sa\n", 1);
	}
}

void	sb(t_stack *b, int msg)
{
	if (!b)
		return ;
	sa(b, 0);
	if (msg)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack *a, t_stack *b)
{
	if (a && b)
	{
		sa(a, 0);
		sb(b, 0);
	}
	ft_putstr_fd("ss\n", 1);
}

void	pa(t_stack *a, t_stack *b)
{
	if (!b->first)
		return ;
	if (!a->first)
	{
		a->first = b->first;
		b->first = b->first->next;
		b->first->back = NULL;
		a->first->next = NULL;
		a->last = a->first;
	}
	else if (a->first->data)
	{
		a->first->back = b->first;
		b->first = b->first->next;
		b->first->back = NULL;
		a->first->back->next = a->first;
		a->first = a->first->back;
	}
	ft_putstr_fd("pa\n", 1);
}
