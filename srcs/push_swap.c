/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:46:10 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/25 19:17:21 by bcolin           ###   ########.ch       */
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

int	ft_check_nb(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9'))
			return (1);
		else if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

t_stack	*ft_parsing(int ac, char **av)
{
	t_stack a;
	char **tab;

	if (ac == 2)
	{

		tab = ft_split(av[1], ' ');
		if (!tab)
			exit(1);
		if(ft_check_double(tab) && ft_check_nb(av[1]))
		{
			ft_putstr_fd("error\n", 1);
			exit(1);
		}
	}
}

int	main(int ac, char **av)
{
	t_stack	*a;
	//t_stack	*b;

	a = ft_parsing(ac, av);
	//b = ft_init_stack();
	//ft_showlist(a);
	return (0);
}
