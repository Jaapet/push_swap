/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:40:06 by ndesprez          #+#    #+#             */
/*   Updated: 2023/05/16 15:26:10 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	int	temp_index;
	int	temp_data;

	temp_index = (*stack)->index;
	temp_data = (*stack)->data;
	(*stack)->index = (*stack)->next->index;
	(*stack)->data = (*stack)->next->data;
	(*stack)->next->index = temp_index;
	(*stack)->next->data = temp_data;
}

void	sswap(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
}
