/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:46:10 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/25 17:42:08 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_parsing(int ac, char **av, t_stack **list_a)
{
	int	error_check;

	error_check = 0;
	if (ac == 2)
	{
		error_check = ft_extract_nb(av[1], list_a);
		if (error_check)
			return (1);
		else
			return (0);
	}
	else if (ac > 2)
	{
		error_check = ft_extract_nb_multi(av, list_a, ac);
		if (error_check)
			return (1);
		else
			return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_list_data	a;
	t_list_data	b;
	int			error_check;

	error_check = 0;
	if (ac > 1)
	{
		error_check = ft_parsing(ac, av, &a.first);
		if (error_check)
		{
			ft_putstr_fd("error", 1);
			return (1);
		}

		//t_stack *list_b;
		//list_b = ft_new_cell(30);
		//sa(a->first, 1);
		//sb(b->first, 1);
		//ss(a->first, b->first);
		//pb(list_a, list_b);
		ft_showlist_multi(a.first, b.first);
		//ft_start_resolve(&list_a);
	}
	return (0);
}
