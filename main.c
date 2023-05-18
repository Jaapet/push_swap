/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:09:33 by ndesprez          #+#    #+#             */
/*   Updated: 2023/05/18 11:37:43 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	ft_lstprint(t_stack *lst)
{
	while (lst)
	{
		printf(" %d ->", lst->data);
		lst = lst->next;
	}
	printf(" NULL\n");
}*/
void	sort_three(t_stack **a)
{
	if ((*a)->data > (*a)->next->data
		&& (*a)->next->data > (*a)->next->next->data)
	{
		sa(a);
		rra(a);
	}
	else if ((*a)->data < (*a)->next->next->data
		&& (*a)->next->data > (*a)->next->next->data)
	{
		sa(a);
		ra(a);
	}
	else if ((*a)->data > (*a)->next->data
		&& (*a)->data < (*a)->next->next->data)
		sa(a);
	else if ((*a)->data < (*a)->next->data
		&& (*a)->data > (*a)->next->next->data)
		rra(a);
	else if ((*a)->next->next->data > (*a)->next->data
		&& (*a)->data > (*a)->next->next->data)
		ra(a);
}

void	sort(t_stack **a, t_stack **b, long int size)
{
	if (size == 2 && !is_sort(a))
		sa(a);
	else if (size == 3 && !is_sort(a))
		sort_three(a);
	//else if (size == 5)
	//	sort_five(a, b);
	else
		radix(a, b, size);
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
	sort(&a, &b, list->size);
	return (0);
}
