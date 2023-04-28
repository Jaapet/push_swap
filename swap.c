/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:40:06 by ndesprez          #+#    #+#             */
/*   Updated: 2023/04/27 14:40:07 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(pile pile)
{
	int	temp;

	temp = pile.pile[0];
	pile.pile[0] = pile.pile[1];
	pile.pile[1] = temp;
}

void	sswap(pile a, pile b)
{
	swap(a);
	swap(b);
}