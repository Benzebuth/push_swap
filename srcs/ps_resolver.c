/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_resolver.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 21:22:17 by bcolin            #+#    #+#             */
/*   Updated: 2022/01/04 23:07:19 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	check_order(t_stack *a, t_stack *b)
{
	int	nb;
	t_node	*cell;

	if (b->first || !a)
		return (1);
	nb = a->first->data;
	cell = a->first;
	while (cell)
	{
		if (nb > cell->data)
			return (1);
		nb = cell->data;
		cell = cell->next;
	}
	return (0);
}

int	count_stacksize(t_stack *stack)
{
	int c;
	t_stack	*tmp;

	c = 0;
	tmp = stack;
	while (tmp->first)
	{
		c++;
		tmp->first = tmp->first->next;
	}
	return (c);
}

t_node	*init_pivot(int size, t_stack *a)
{
	int		mid;
	int		index;
	t_node	*pivot;

	mid = size / 2;
	while (index != mid)
	{
		a->first	
		index++;
	}
	pivot = a->first;
	return (pivot);
}

void	init_env(t_env *env, t_stack *a)
{
	env->size = count_stacksize(a);
	env->pivot = init_pivot(env->size, a);
	env->start = NULL;
	env->end = NULL;
}

void	resolver(t_stack *a, t_stack *b)
{
	t_env	*env;

	init_env(env, a);
	while (check_order(a, b))
	{
		//ft_putstr_fd("pas ok\n", 1);
		pb(a, b, 1);
		ra(a, 1);
		pa(a, b, 1);
	}

}
