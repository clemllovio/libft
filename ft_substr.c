/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:49:31 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/14 15:49:25 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_s;
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	if (s == NULL)
		return (NULL);
	new_s = malloc(sizeof(char) * (len + 1));
	if (!(new_s))
		return (NULL);
	while (i < start)
		i++;
	while (s[i] && k < len)
	{
		new_s[k] = s[i];
		i++;
		k++;
	}
	new_s[k] = '\0';
	return (new_s);
}
