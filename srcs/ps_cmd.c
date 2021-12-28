/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_cmd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:13:00 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/28 01:44:54 by bcolin           ###   ########.ch       */
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

void	pa(t_stack *a, t_stack *b, int msg)
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
	else if (a->first && a->first->data && b->first->next)
	{
		a->first->back = b->first;
		b->first = b->first->next;
		b->first->back = NULL;
		a->first->back->next = a->first;
		a->first = a->first->back;
	}
	else if (b->last == b->first)
	{
		b->first->next = a->first;
		a->first->back = b->first;
		a->first = b->first;
		b->first = NULL;
		b->last = NULL;
	}
	if (msg)
		ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack *a, t_stack *b, int msg)
{
	pa(b, a, 0);
	if (msg)
		ft_putstr_fd("pb\n", 1);
}

void	ra(t_stack *a, int msg)
{
	if (a && a->first != a->last)
	{
		a->first->next->back = NULL;
		a->first->back = a->last;
		a->last->next = a->first;
		a->first = a->first->next;
		a->last = a->last->next;
		a->last->next = NULL;
		if (msg)
		ft_putstr_fd("ra\n", 1);
	}
}

void	rb(t_stack *b, int msg)
{
	if (b)
		ra(b, 0);
	if (msg)
		ft_putstr_fd("rb\n", 1);
}

void	rr(t_stack *a, t_stack *b)
{
	if (!a && !b)
		return ;
	ra(a, 0);
	rb(b, 0);
	ft_putstr_fd("rr\n", 1);
}
