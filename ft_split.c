/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:26:17 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/15 13:35:03 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_c(char const *s, char c, int i)
{
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	nb_words(char const *s, char c)
{
	int	i;
	int	j;

	while (s[i])
	{
		
	}
}
char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 0;
	j = 0;
	k = 0;
	split = malloc(sizeof(char *) *)
	while (s[i])
	{
		while (find_c(s, c, i) == 0)
		{
			split[j][k] = s[i];
			i++;
			k++;
		}
		k = 0;
		j++;
		i++;
	}
}