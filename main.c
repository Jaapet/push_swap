/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:09:33 by ndesprez          #+#    #+#             */
/*   Updated: 2023/05/18 15:07:53 by ndesprez         ###   ########.fr       */
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
int	find_lowest(t_stack **stack)
{
	int		i;
	t_stack	*temp;

	temp = *stack;
	i = 5;
	while (temp)
	{
		if (temp->data < i)
			i = temp->data;
		temp = temp->next;
	}
	return (i);
}

static void	sort_three(t_stack **a)
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

static void	sort_five(t_stack **a, t_stack **b)
{
	int	i;
	int	min;
	int	bef_min;

	i = 0;
	min = 0;
	bef_min = 1;
	while (i < 2)
	{
		while ((*a)->data != min && (*a)->data != bef_min)
			ra(a);
		pb(a, b);
		i++;
	}
	if (!is_sort(a))
		sort_three(a);
	if (is_sort(b))
		sb(b);
	while (*b)
		pa(b, a);
}

static void	sort(t_stack **a, t_stack **b, long int size)
{
	if (size == 2 && !is_sort(a))
		sa(a);
	else if (size == 3 && !is_sort(a))
		sort_three(a);
	else if (size == 5 && !is_sort(a))
		sort_five(a, b);
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
	ft_lstclear(&a);
	free(list->array);
	free(list->index_array);
	free(list);
	return (0);
}
