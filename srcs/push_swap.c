/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:46:10 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/27 17:33:02 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_double(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (j < i)
		{
			if (!(ft_strncmp(tab[i], tab[j], 10)))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_nb(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] == '-' && ft_isdigit(tab[i][j + 1]))
				j++;
			else if (!(ft_isdigit(tab[i][j])))
				return (1);
			else
				j++;
		}
		i++;
	}
	return (0);
}

void	ft_extract(char **tab, t_node **list_a)
{
	int		i;
	t_node	*new;

	i = 0;
	while (tab[i])
	{
		new = ft_new_node(ft_atoi(tab[i]));
		ft_addnode_end(list_a, new);
		i++;
	}
}

t_stack	*ft_parsing(int ac, char **av)
{
	t_stack *dest;
	char	**tab;

	dest = init_stack();
	if (ac == 2)
	{

		tab = ft_split(av[1], ' ');
		if (!tab)
			exit(1);
		if(ft_check_nb(tab) || ft_check_double(tab))
			error_send();
		ft_extract(tab, &dest->first);
	}
	dest->last = ft_lastnode(dest->first);
	return (dest);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = ft_parsing(ac, av);
	b = init_stack();
	ss(a, b);
	showstack(a);
	showstack(b);
	return (0);
}
