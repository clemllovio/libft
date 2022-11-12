/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:06:08 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/12 12:09:52 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*vdest;
	const char	*vsrc;

	vdest = (char *) dest;
	vsrc = (const char *) src;
	i = 0;
	while (i < n)
	{
		vdest[i] = vsrc[i];
		i++;
	}
	return (dest);
}
