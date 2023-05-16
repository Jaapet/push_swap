/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:35:27 by ndesprez          #+#    #+#             */
/*   Updated: 2023/05/16 20:53:03 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str)
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
		if (str[i] < 0 || str[i] > 9)
			throw_error();
		val = val * 10 + str[i] - '0';
		i++;
	}
	if (val > INT_MAX || val < INT_MIN)
		throw_error();
	return (val * sign);
}

void	check_occurence(long int *list, int size, int nb)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (list[i] == nb)
			throw_error();
	}
}

long int	*parse_one_arg(char *str)
{
	char		**args;
	int			i;
	int			len;
	long int	*list;

	args = ft_split(str, ' ');
	if (!args)
		return (NULL);
	i = 0;
	len = 0;
	while (args[i])
		len++;
	list = malloc(sizeof(long int) * len);
	if (!list)
		return (NULL);
	i = 0;
	while (args[i])
	{
		list[i] = ft_atoi(args[i]);
		check_occurence(list, i + 1, list[i]);
		i++;
	}
	return (list);
}

long int	*parse_list(int argc, char **argv)
{
	int			i;
	long int	*list;

	if (argc == 2)
	{
		list = parse_one_arg(argv[2]);
		if (!list)
			return (NULL);
	}
	else
	{
		list = malloc(sizeof(int) * (argc - 1));
		if (!list)
			return (NULL);
		i = 1;
		while (i < argc)
		{
			list[i - 1] = ft_atoi(argv[i]);
			check_occurence(list, i, list[i - 1]);
			i++;
		}
	}
	list = get_index(list);
	return (list);
}
