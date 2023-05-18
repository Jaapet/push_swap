/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:21:56 by ndesprez          #+#    #+#             */
/*   Updated: 2023/05/17 20:10:45 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sort(t_stack **stack)
{
	t_stack		*copy;
	long int	temp;

	copy = (*stack);
	temp = 0;
	while (copy)
	{
		if (copy->data < temp)
			return (0);
		temp = copy->data;
		copy = copy->next;
	}
	return (1);
}

void	radix(t_stack **a, t_stack **b, long int size)
{
	long int	i;
	int			shift;

	shift = 0;
	while (!is_sort(a))
	{
		i = 0;
		while (i < size)
		{
			if ((*a)->data >> shift & 1)
				ra(a);
			else
				pb(a, b);
			i++;
		}
		while ((*b))
			pa(b, a);
		shift++;
	}
}
