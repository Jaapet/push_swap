/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:35:27 by ndesprez          #+#    #+#             */
/*   Updated: 2023/05/18 14:46:51 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_atoi(char *str)
{
	long int	val;
	int			sign;
	int			i;

	val = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			throw_error();
		val = val * 10 + str[i] - '0';
		i++;
	}
	if (val > INT_MAX || val < INT_MIN)
		throw_error();
	return (val * sign);
}

static void	check_occurence(long int *list, int size, int nb)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (list[i] == nb)
			throw_error();
		i++;
	}
}

static t_list	*parse_one_arg(char *str)
{
	char	**args;
	int		i;
	t_list	*list;

	args = ft_split(str, ' ');
	if (!args)
		return (NULL);
	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->size = 0;
	while (args[list->size])
		list->size++;
	list->array = malloc(sizeof(long int) * list->size);
	if (!list->array)
		return (NULL);
	i = 0;
	while (args[i])
	{
		list->array[i] = ft_atoi(args[i]);
		check_occurence(list->array, i + 1, list->array[i]);
		i++;
	}
	ft_free(args);
	return (list);
}

static t_list	*parse_mult_args(int argc, char **argv)
{
	int			i;
	t_list		*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->size = argc - 1;
	list->array = malloc(sizeof(long int) * (argc - 1));
	if (!list->array)
		return (NULL);
	i = 1;
	while (i < argc)
	{
		list->array[i - 1] = ft_atoi(argv[i]);
		check_occurence(list->array, i, list->array[i - 1]);
		i++;
	}
	return (list);
}

t_list	*parse_list(int argc, char **argv)
{
	t_list		*list;

	if (argc == 2)
		list = parse_one_arg(argv[1]);
	else
		list = parse_mult_args(argc, argv);
	list->index_array = set_index(list);
	return (list);
}
