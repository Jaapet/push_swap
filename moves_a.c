/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:17:52 by ndesprez          #+#    #+#             */
/*   Updated: 2023/05/18 11:07:00 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a)
{
	rotate(a);
	ft_putstr("ra\n");
}

void	rra(t_stack **a)
{
	rev_rotate(a);
	ft_putstr("rra\n");
}

void	pa(t_stack **b, t_stack **a)
{
	push(b, a);
	ft_putstr("pa\n");
}

void	sa(t_stack **a)
{
	swap(a);
	ft_putstr("sa\n");
}
