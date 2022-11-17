/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:27:32 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/16 13:44:14 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i ++;
	}
	dest[len + i] = '\0';
	return (dest);
}

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int dstsize)
{
	unsigned int	dsize;
	unsigned int	ssize;

	if (dstsize == 0 && dest == NULL)
		return (0);
	dsize = ft_strlen(dest);
	ssize = ft_strlen(src);
	if (dsize >= dstsize)
		return (dstsize + ssize);
	else if ((dsize + ssize) >= dstsize)
	{
		ft_strncat(dest, src, dstsize - dsize - 1);
		return (dsize + ssize);
	}
	else
	{
		ft_strncat(dest, src, ssize);
		return (dsize + ssize);
	}	
}
