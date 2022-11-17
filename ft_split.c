/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:26:17 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/17 14:32:14 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static int	ft_count_nb_words(char const *s, char c)
{
	int	i;
	int	nb_words;

	i = 0;
	nb_words = 0;
	while (s[i])
	{
		if (s[i] == c && s[i] != 0)
		{
			while (s[i] == c)
				i++;
			if (s[i] != '\0')
				nb_words++;
		}
		else
			i++;
	}
	printf("%d\n", nb_words);
	return (nb_words);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**split;
	split = malloc(sizeof(char *) * (ft_count_nb_words(s, c) + 1));
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] && s[i] == c)
				i++;
		}
		start = i;
		while (s[i] && s[i] != c)
			i++;
		split[j] = ft_substr(s, start, i - start);
		j++;
	}
	if (ft_count_nb_words(s, c) == 1)
		split[j] = NULL;
	else
		split[j - 1] = NULL;
	return (split);
}

#include <stdio.h>

int	main(void)
{
	char const	*s = "      split       this for   me  !       ";
//	char		c = ' ';
	char		**result = ft_split(s, ' ');
	int			i;

	i = 0;
	while (result[i])
	{
		printf("'%s'\n", result[i]);
		i++;
	}
}
