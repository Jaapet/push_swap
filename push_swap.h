/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:34:17 by ndesprez          #+#    #+#             */
/*   Updated: 2023/05/17 15:41:22 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}	t_stack;

typedef struct s_list
{
	long int	*array;
	long int	*index_array;
	long int	size;
}	t_list;

void		push(t_stack **src, t_stack **dst);
void		swap(t_stack **stack);
void		lst_add(t_stack **stack, int data);
void		throw_error(void);
char		**ft_split(char const *str, char c);
t_list		*parse_list(int argc, char **argv);
long int	*set_index(t_list *list);
#endif