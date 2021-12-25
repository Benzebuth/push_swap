/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:51:58 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/25 17:22:36 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define KRED "\x1B[31m"
# define KGRN "\x1B[32m"
# define KYEL "\x1B[33m"
# define KWHT "\x1B[37m"
//Includes

# include "../libft/includes/libft.h"
# include <stdio.h>

//Struct

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
	struct s_stack	*back;
}	t_stack;

typedef struct s_list_data
{
	struct s_stack	*first;
	struct s_stack	*last;
}	t_list_data;

//Prototype

t_stack	*ft_new_cell(int nb);
t_stack	*ft_lastcell(t_stack *list);
void	ft_addcell_end(t_stack **list, t_stack *new_cell);
void	ft_addcell_front(t_stack **list, t_stack *new_cell);
void    ft_delete_cell(t_stack *cell);
int		ft_check_onlynumber(char *str);
void	ft_showlist(t_stack *list);
void	ft_showlist_multi(t_stack *a, t_stack *b);
int		ft_check_double(char **tab, int pos, int set_mul);
int		ft_extract_nb(char *str, t_stack **list_a);
int		ft_extract_nb_multi(char **str, t_stack **list_a, int ac);

// command stack manipulation
void	sa(t_stack *list, int msg);
void	sb(t_stack *list, int msg);
void	ss(t_stack *list_a, t_stack *list_b);
void	pa(t_stack *list_a, t_stack *list_b);
void	pb(t_stack *list_a, t_stack *list_b);

#endif
