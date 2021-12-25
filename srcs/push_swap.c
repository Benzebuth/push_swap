/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:46:10 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/25 18:33:21 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_parsing(int ac, char **av)
{
	t_stack	*a;
	int	error_check;

	error_check = 0;
	if (ac == 2)
	{
		error_check = ft_extract_nb(av[1], a);
		if (error_check)
		{
			ft_putstr_fd("error", 1);
			exit(1);
		}
	}
	else if (ac > 2)
	{
		error_check = ft_extract_nb_multi(av, &a, ac);
		if (error_check)
		{
			ft_putstr_fd("error", 1);
			exit(1);
		}
	}
	return (a);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	//t_stack	*b;

	a = ft_parsing(ac, av);
	//b = ft_init_stack();
	ft_showlist(a);
	return (0);
}
