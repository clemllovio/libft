/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:15:08 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/14 11:48:45 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char		*mem;
	size_t		i;

	i = 0;
	if (size == SIZE_MAX)
		return (NULL);
	mem = malloc(sizeof (char) * (count * size));
	if (!(mem))
		return (NULL);
	while (i < (count * size))
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
