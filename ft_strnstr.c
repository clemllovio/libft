/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:44:17 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/14 13:35:46 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	if (needle[k] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		k = 0;
		while (haystack[i + k] == needle[k] && haystack[i + k] && i + k < len)
			k++;
		if (needle[k] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
