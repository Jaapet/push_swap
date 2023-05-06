/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:40:06 by ndesprez          #+#    #+#             */
/*   Updated: 2023/05/06 16:45:27 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	int	last;
	int	before_last;

	last = ft_lstsearch(stack, ft_lstsize(stack))->data;
	before_last = ft_lstsearch(stack, ft_lstsize(stack) - 1)->data;
	ft_lstsearch(stack, ft_lstsize(stack))->data = before_last;
	ft_lstsearch(stack, ft_lstsize(stack) - 1)->data = last;
}

void	sswap(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
}
