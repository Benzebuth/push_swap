/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_showtools.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 17:38:01 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/26 18:53:58 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void showstack(t_stack *stack)
{
	printf("%sstack:%p\nfirst:%p\nlast:%p\n", KRED, stack, stack->first, stack->last);
	while (stack->first->next)
	{
		printf("\n%sdata -> %i\nprev:%p\nactual:%p\nnext:%p\n", KYEL, stack->first->data, stack->first->back, stack->first, stack->first->next);
		stack->first = stack->first->next;
	}
	if (stack->first->data)
		printf("\n%sdata -> %i\nprev:%p\nactual:%p\nnext:%p\n", KYEL, stack->first->data, stack->first->back, stack->first, stack->first->next);

}

void error_send(void)
{
	ft_putstr_fd("error\n", 1);
	exit(1);
}
