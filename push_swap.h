/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:34:17 by ndesprez          #+#    #+#             */
/*   Updated: 2023/05/06 16:39:37 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	int		data;
	t_pile	*next;
}	t_stack;

int		ft_lstsize(t_stack *lst);
t_stack	*ft_lstsearch(t_stack *lst, int index);
void	swap(t_stack *stack);

#endif