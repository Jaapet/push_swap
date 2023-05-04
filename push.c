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

int	**push(pile src, pile dst)
{
	int **ret;
	int *new_set_src;
	int *new_set_dst;
	int	i;

	if (!(src.pile))
		return (NULL);
	new_set_dst = malloc(sizeof(int) * (dst.size + 1));
	if (!(new_set_dst))
		return (NULL);
	i = 0;
	new_set_dst[0] = src.pile[0];
	while (i < dst.size)
	{
		new_set_dst[i + 1] = dst.pile[i];
		i++;
	}
	new_set_src = malloc(sizeof(int) * (src.size - 1));
	if (!(new_set_src))
		return (NULL);
	i = 0;
	while (i < src.size - 1)
	{
		new_set_src[i] = src.pile[i + 1];
		i++;
	}
	ret = malloc(sizeof(int *) * 2);
	if (!ret)
		return (NULL);
	ret[0] = new_set_src;
	ret[1] = new_set_dst;
	free(src.pile);
	if (!(dst.pile))
		free(dst.pile);
	return (ret);
}