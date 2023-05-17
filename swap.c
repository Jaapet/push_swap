/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:40:06 by ndesprez          #+#    #+#             */
/*   Updated: 2023/05/17 18:08:23 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	long int	temp_data;

	temp_data = (*stack)->data;
	(*stack)->data = (*stack)->next->data;
	(*stack)->next->data = temp_data;
}

void	sswap(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
}
