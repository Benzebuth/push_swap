/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:12:52 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/25 16:56:58 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lastcell(t_stack *list)
{
	if (!list)
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
}

t_stack	*ft_new_cell(int nb)
{
	t_stack	*cell;

	cell = (t_stack *)malloc(sizeof(t_stack));
	if (!cell)
		return (NULL);
	cell->data = nb;
	cell->next = NULL;
	cell->back = NULL;
	return (cell);
}

void	ft_addcell_end(t_stack **list, t_stack *new_cell)
{
	t_stack	*tmp;

	if (*list)
	{
		tmp = ft_lastcell(*list);
		tmp->next = new_cell;
		new_cell->back = tmp;
	}
	else
		*list = new_cell;
}

void	ft_addcell_front(t_stack **list, t_stack *new_cell)
{
	if (!list || !new_cell)
		return ;
	new_cell->next = *list;
	*list = new_cell;
}

void	ft_delete_cell(t_stack *cell)
{
	cell->data = 0;
	if (cell->back == NULL)
	{
		cell->next->back = NULL;
		free(cell);
	}
}
