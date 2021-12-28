/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_showtools.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 17:38:01 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/28 01:02:16 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	_showstack_multi(t_stack *a, t_stack *b)
{
	while (a->first && a->first->data && b->first && b->first->data)
	{
		printf("%s%4i   %s|   %s%i\n", KGRN, a->first->data,
			KWHT, KYEL, b->first->data);
		a->first = a->first->next;
		b->first = b->first->next;
	}
}

void	showstack_multi(t_stack *a, t_stack *b)
{
	t_node	*first_a;
	t_node	*first_b;

	if (!a || !b)
		return ;
	first_a = a->first;
	first_b = b->first;
	printf("%s   A   %s|%s   B\n", KGRN, KWHT, KYEL);
	printf(" %s----- %s|%s -----\n", KGRN, KWHT, KYEL);
	_showstack_multi(a, b);
	while (a->first && a->first->data)
	{
		printf("%s%4i   %s|\n", KGRN, a->first->data, KWHT);
		a->first = a->first->next;
	}
	while (b->first && b->first->data)
	{
		printf("       %s|%s%4i\n", KWHT, KYEL, b->first->data);
		b->first = b->first->next;
	}
	a->first = first_a;
	b->first = first_b;
}

static void	_showstack_loop(t_stack *stack, char *color)
{
	printf("\n%sstack:%18p\nfirst:%18p\nlast:%19p\n",
		KRED, stack, stack->first, stack->last);
	if (stack->first)
	{
		while (stack->first->next)
		{
			printf("\n%sdata -> %4i\n prev:%18p | (actual:%14p) | next:%18p\n",
				color, stack->first->data, stack->first->back,
				stack->first, stack->first->next);
			stack->first = stack->first->next;
		}
	}
}

void	showstack(t_stack **stack_address, int col_opt)
{
	char	*color;
	t_stack	*stack;
	t_node	*first_tmp;
	t_node	*last_tmp;

	color = "";
	if (col_opt == 1)
		color = KWHT;
	else if (col_opt == 2)
		color = KGRN;
	else if (col_opt == 3)
		color = KYEL;
	else if (col_opt == 4)
		color = KRED;
	stack = *stack_address;
	first_tmp = stack->first;
	last_tmp = stack->last;
	if (stack)
		_showstack_loop(stack, color);
	if (stack->first && stack->first->data)
		printf("\n%sdata -> %4i\n prev:%18p | (actual:%14p) | next:%18p\n",
			color, stack->first->data, stack->first->back,
			stack->first, stack->first->next);
	stack->first = first_tmp;
	stack->last = last_tmp;
}
