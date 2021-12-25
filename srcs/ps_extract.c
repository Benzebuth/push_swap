/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_extract.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 15:47:55 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/25 17:35:19 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_extract_nb(char *str, t_stack **a)
{
	char	**tab;
	int		i;

	if (ft_check_onlynumber(str))
		return (1);
	tab = ft_split(str, ' ');
	if (!tab[0])
		return (1);
	i = 0;
	while (tab[i])
	{
		if (ft_check_double(tab, i, 0))
			return (1);
		ft_addcell_end(a, ft_new_cell(ft_atoi(tab[i])));
		i++;
	}
	if (*tab)
		free(*tab);
	return (0);
}

int	ft_extract_nb_multi(char **str, t_stack **list_a, int ac)
{
	int		i;

	i = 1;
	while (i < ac)
	{
		if (ft_check_double(str, i, 1))
			return (1);
		if (ft_check_onlynumber(str[i]))
			return (1);
		else
			ft_addcell_end(list_a, ft_new_cell(ft_atoi(str[i])));
		i++;
	}
	return (0);
}
