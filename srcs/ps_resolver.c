/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_resolver.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 21:22:17 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/28 21:32:09 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	resolver(t_stack *a, t_stack *b)
{
	int	tmp;
	(void)b;

	tmp = a->first->data;
	while (tmp > a->first->next->data)
		sa(a, 1);

}
