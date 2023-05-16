/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_build.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:15:05 by ndesprez          #+#    #+#             */
/*   Updated: 2023/05/16 17:20:36 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_add(t_stack **stack, int data)
{
	t_stack	*new;
	t_stack	*last;

	new = malloc(sizeof(t_stack));
	if (!new)
		return ;
	new->data = data;
	new->next = NULL;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	last = *stack;
	while (last-> next)
		last = last->next;
	last->next = new;
}
