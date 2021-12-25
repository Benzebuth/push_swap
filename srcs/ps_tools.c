/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:58:01 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/25 16:49:28 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_onlynumber(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
			i++;
		else if (str[i] == ' ' || str[i] == '\t')
			i++;
		else
			return (1);
	}
	return (0);
}

int	ft_check_double(char **tab, int pos, int setting_mutl)
{
	int	i;

	i = 0;
	if (setting_mutl == 1)
		i = 1;
	while (i < pos)
	{
		if (!(ft_strncmp(tab[pos], tab[i], 10)))
			return (1);
		i++;
	}
	return (0);
}

void	ft_showlist(t_stack *list)
{
	while (list->next)
	{
		ft_putstr_fd(ft_itoa(list->data), 1);
		printf(" <- data | back :%p\n", list->back);// a delete
		printf("actual : %p\n", list);
		printf("next :%p\n", list->next);// a delete
		ft_putstr_fd("\n", 1);
		list = list->next;
	}	
	ft_putstr_fd(ft_itoa(list->data), 1);
	printf(" <- data | back :%p\n", list->back);// a delete
	printf("next :%p\n", list->next);// a delete
	ft_putstr_fd("\n", 1);
}

void	ft_showlist_multi(t_stack *a, t_stack *b)
{
	while (a->next != NULL && b->next != NULL)
	{
		printf("%s %i %s:%s %i \n", KGRN, a->data, KWHT, KYEL, b->data);
		a = a->next;
		b = b->next;
	}
	while (a->next)
	{
		printf("%s a: %i \n", KGRN, a->data);
		a = a->next;
	}
	printf("%s a: %i \n", KGRN, a->data);
	while (b->next)
	{
		printf("%s b: %i \n", KYEL, b->data);
		b = b->next;
	}
	printf("%s b: %i \n", KYEL, b->data);
}
