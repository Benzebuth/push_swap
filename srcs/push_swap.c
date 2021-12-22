/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:46:10 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/22 15:05:13 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int ft_extract_nb(char *str, t_stack **list_a)
{
    char **tab;
    int i;
    int j;

    if (ft_check_onlynumber(str))
        return (1);
    tab = ft_split(str, ' ');
    if (!tab[0])
        return (1);
    i = 0;
    j = 0;
    while (tab[i])
    {
        ft_addcell_end(list_a, ft_new_cell(ft_atoi(tab[i])));
        i++;
    }
    return (0);
}

static int ft_parsing(int ac, char **av, t_stack **list_a)
{
    int error_check;

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
        // fonction extract para no-string
        return (0);
    }
    return (1);
}

int main(int ac, char **av)
{
    t_stack *list_a;
    int     error_check;

    list_a = NULL;
    error_check = 0;
    if (ac > 1)
    {

        error_check = ft_parsing(ac, av, &list_a);
        if (error_check)
        {
            ft_putstr_fd("error", 1);
            return (1);
        }
    }
    return (0);
}
