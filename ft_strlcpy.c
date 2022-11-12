/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:57:42 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/12 11:13:21 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int destsize)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i <= destsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (destsize > 0)
	{
		dest[i] = '\0';
		return (ft_strlen(src));
	}
	return (0);
}
