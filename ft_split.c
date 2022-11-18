/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:26:17 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/18 15:56:14 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h> //test

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	nb_words;
	int	is_valid;

	i = 0;
	nb_words = 0;
	while (s[i])
	{
		is_valid = 0;
		while (s[i] && s[i] == c)
		i++;
		while (s[i] && s[i] != c)
		{
			is_valid = 1;
			i++;
		}
		if ((s[i] == c || s[i] == 0) && is_valid)
		nb_words++;
	}
	return (nb_words);
}

static void	*ft_free(char **tab)
{
	while (*tab != NULL)
	{
		free(*tab);
		tab++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**tab;
	size_t		i;
	size_t		j;
	size_t		start;


	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!(tab))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			tab[j] = ft_substr(s, start, i - start);
			if (!(tab[j]))
				return (ft_free(tab));
			j++;
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}

