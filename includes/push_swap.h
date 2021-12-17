/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:51:58 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/17 14:32:39 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/includes/libft.h"
#include <stdio.h>

typedef struct s_list
{
    int             data; 
    struct s_list   *next;
    struct s_list   *back;
} t_list;

typedef struct s_list_data
{
    struct s_list_data  *first;
    struct s_list_data  *last;
    int                 size;
} t_list_data;

#endif
