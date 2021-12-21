/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:51:58 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/21 17:13:09 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//Includes

#include "../libft/includes/libft.h"
#include <stdio.h>

//Struct

typedef struct s_stack
{
    int             data; 
    struct s_stack  *next;
    struct s_stack  *back;
}   t_stack;

typedef struct s_list_data
{
    struct s_stack  *first;
    struct s_stack  *last;
    int             size;
}   t_list_data;

//Prototype

t_stack *ft_lastcell(t_stack *list);
t_stack *ft_new_cell(int nb);
void    ft_addcell_end(t_stack **list, t_stack *new_cell);
void    ft_addcell_front(t_stack **list, t_stack *new_cell);

#endif
