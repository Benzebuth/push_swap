/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_list_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 19:40:59 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/26 18:48:32 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_lastnode(t_node *list)
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
		new_node->back = tmp;
	}
	else
		*list = new_node;
}

t_node	*ft_new_node(int nb)
{
	t_node *new;

	if (!nb)
		return (NULL);
	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->data = nb;
	new->next = NULL;
	new->back = NULL;
	return (new);

}

t_stack	*init_stack(void)
{
	t_stack *new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->first = NULL;
	new->last = NULL;
	return (new);
}
