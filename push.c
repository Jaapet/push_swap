/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:40:23 by ndesprez          #+#    #+#             */
/*   Updated: 2023/05/17 18:08:03 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **src, t_stack **dst)
{
	t_stack	*temp;

	temp = (*src)->next;
	if (*dst)
		(*src)->next = *dst;
	else
		(*src)->next = NULL;
	*dst = *src;
	*src = temp;
}
