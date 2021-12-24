/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:12:52 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/24 09:33:52 by bcolin           ###   ########.ch       */
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

void	ft_showlist(t_stack *list)
{
	while (list->next)
	{
		ft_putstr_fd(ft_itoa(list->data), 1);
		printf(" <- data | back :%p\n", list->back);// a delete
		printf("next :%p\n", list->next);// a delete
		ft_putstr_fd("\n", 1);
		list = list->next;
	}	
	ft_putstr_fd(ft_itoa(list->data), 1);
	printf(" <- data | back :%p\n", list->back);// a delete
	printf("next :%p\n", list->next);// a delete
	ft_putstr_fd("\n", 1);
}
