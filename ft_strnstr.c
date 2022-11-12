/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:44:17 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/12 11:13:15 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle [j])
		{
			while (haystack[i] == needle [j] && j < len && neddle[j])
			{
				i++;
				j++;
			}
		}
		if (needle[j] == '\0')
			return ((char *)(&haystack[i - j]));
		i++;
	}
	return (0);
}
