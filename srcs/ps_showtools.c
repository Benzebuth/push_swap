/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_showtools.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 17:38:01 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/27 20:31:59 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void showstack(t_stack *stack, int col_opt)
{
	char *color;

	color = "";
	if (col_opt == 1)
		color = KWHT;
	else if (col_opt == 2)
		color = KGRN;
	else if (col_opt == 3)
		color = KYEL;
	else if (col_opt == 4)
		color = KRED;

	if (stack)
	{
		printf("\n%sstack:%18p\nfirst:%18p\nlast:%19p\n", KRED, stack, stack->first, stack->last);
		if (stack->first)
		{	
			while (stack->first->next)
			{
				printf("\n%sdata -> %4i\n prev:%18p | (actual:%14p) | next:%18p\n", 
						color, stack->first->data, stack->first->back, stack->first, stack->first->next);
				stack->first = stack->first->next;
			}
		}
	}
	if (stack->first && stack->first->data)
		printf("\n%sdata -> %4i\n prev:%18p | (actual:%14p) | next:%18p\n",
				color, stack->first->data, stack->first->back, stack->first, stack->first->next);
}

void error_send(void)
{
	ft_putstr_fd("error\n", 1);
	exit(1);
}
