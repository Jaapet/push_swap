/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:09:33 by ndesprez          #+#    #+#             */
/*   Updated: 2023/05/17 18:07:49 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "parser.c"
#include "lst_build.c"
#include "swap.c"
#include "push.c"
#include "rotate.c"
#include "rev_rotate.c"

void	ft_lstprint(t_stack *lst)
{
	while (lst)
	{
		printf(" %d ->", lst->data);
		lst = lst->next;
	}
	printf(" NULL\n");
}

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	t_list		*list;
	long int	i;

	if (argc == 1)
		return (0);
	b = NULL;
	i = 0;
	list = parse_list(argc, argv);
	while (i < list->size)
	{
		lst_add(&a, list->index_array[i]);
		i++;
	}
	ft_lstprint(a);
	rev_rotate(&a);
	ft_lstprint(a);
	rotate(&a);
	ft_lstprint(a);
	return (0);
}
