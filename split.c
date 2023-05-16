/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:59:21 by ndesprez          #+#    #+#             */
/*   Updated: 2023/05/16 19:06:33 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*create_word(char const *str, char c)
{
	int		i;
	int		j;
	char	*word;

	i = 0;
	j = 0;
	while (str[i] != c && str[i])
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (word == NULL)
		return (NULL);
	while (str[j] != c && str[j])
	{
		word[j] = str[j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && str[i])
		{
			while (str[i] != c && str[i])
				i++;
			count++;
		}
		while (str[i] == c && str[i])
			i++;
	}
	return (count);
}

static char	**ft_free(char **list, char const *s, char c)
{
	int	i;

	i = 0;
	while (list[i])
	{
		free(list[i]);
		i++;
	}
	free(list);
	return (NULL);
}

char	**ft_split(char const *str, char c)
{
	char	**list;
	int		i;

	i = 0;
	list = malloc(sizeof(char *) * (ft_count_words(str, c) + 1));
	if (list == NULL)
		return (NULL);
	while (*str)
	{
		if (*str != c && *str)
		{
			list[i] = create_word(str, c);
			if (!list[i])
				return (ft_free(list, str, c));
			i++;
			while (*str != c && *str)
				str++;
		}
		while (*str == c && *str)
			str++;
	}
	list[i] = 0;
	return (list);
}
