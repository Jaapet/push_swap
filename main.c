/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:09:33 by ndesprez          #+#    #+#             */
/*   Updated: 2023/05/16 18:47:58 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "swap.c"
#include <stdio.h>
/*
void	ft_lstprint(t_stack *lst)
{
	t_stack	*temp;

	temp = lst;
	while (temp)
	{
		printf("%d\n", lst->data);
		temp = temp->next;
	}
}*/

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	long int	*list;

	b = NULL;
	list = parse_list(argc, argv);
}
