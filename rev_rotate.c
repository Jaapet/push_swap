/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:40:52 by ndesprez          #+#    #+#             */
/*   Updated: 2023/05/17 18:08:14 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(t_stack **stack)
{
	t_stack	*temp_beg;
	t_stack	*temp_end;

	temp_beg = *stack;
	while ((*stack)->next->next)
		*stack = (*stack)->next;
	temp_end = *stack;
	*stack = (*stack)->next;
	(*stack)->next = temp_beg;
	temp_end->next = NULL;
}

void	rrev_rotate(t_stack **a, t_stack **b)
{
	rev_rotate(a);
	rev_rotate(b);
}
