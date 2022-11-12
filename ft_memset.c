/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:53:54 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/12 11:13:44 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned int	i;
	unsigned char	*bb;

	i = 0;
	bb = (unsigned char *) b;
	while (i < len)
	{
		bb[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
