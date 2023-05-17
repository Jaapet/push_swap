/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:20:20 by ndesprez          #+#    #+#             */
/*   Updated: 2023/05/17 16:10:59 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long int	get_index(t_list *list, int nb)
{
	int			i;
	long int	count;

	i = 0;
	count = 0;
	while (i < list->size)
	{
		if (nb > list->array[i])
			count++;
		i++;
	}
	return (count);
}

long int	*set_index(t_list *list)
{
	long int	*index;
	int			i;

	index = malloc(sizeof(long int) * list->size);
	if (!index)
		return (NULL);
	i = 0;
	while (i < list->size)
	{
		index[i] = get_index(list, list->array[i]);
		i++;
	}
	return (index);
}
