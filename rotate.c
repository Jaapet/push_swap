/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:40:56 by ndesprez          #+#    #+#             */
/*   Updated: 2023/05/17 18:08:11 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*temp_beg;
	t_stack *temp_mov;

	if (!(*stack)->next)
		return ;
	temp_mov = *stack;
	temp_beg = (*stack)->next;
	while ((*stack)->next)
		*stack = (*stack)->next;
	(*stack)->next = temp_mov;
	temp_mov->next = NULL;
	*stack = temp_beg;
}

void	rrotate(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
}
