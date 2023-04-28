/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:40:23 by ndesprez          #+#    #+#             */
/*   Updated: 2023/04/27 14:40:24 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(pile src, pile dst)
{
	int *new_set_src;
	int *new_set_dst;
	int	i;

	if (!(src.pile))
		return ;
	new_set_dst = malloc(sizeof(int) * (dst.size + 1));
	if (!(new_set_dst.pile))
		return ;
	i = 0;
	new_set_dst[0] = src.pile[0];
	while (i < dst.size)
	{
		new_set_dst[i + 1] = dst.pile[i];
		i++;
	}
	new_set_src = malloc(sizeof(int) * (src.size - 1));
	if (!(new_set_src.pile))
		return ;
	i = 0;
	while (i < src.size - 1)
	{
		new_set_src[i] = src.pile[i + 1];
		i++;
	}
	free(src.pile);
	if (!(dst.pile))
		free(dst.pile);
	src.pile = new_set_src;
	dst.pile = new_set_dst;
}