/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_list_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 19:40:59 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/25 19:44:58 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	ft_lastnode(t_node *list)
{
	while (list->next)
	{
		list = list->next;
	}
	return (list);
}

void	ft_addnode_end(t_node **list, t_node *new_node)
{
	t_node *tmp;

	if (*list)
	{
		tmp = ft_lastnode(*list);
		tmp->next = new_node;
	}
	else
		*list = new;
}
