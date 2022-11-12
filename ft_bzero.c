/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:28:05 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/12 11:13:38 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	i;
	unsigned char	*ss;

	i = 0;
	ss = (unsigned char *) s;
	while (i < n)
	{
		ss[i] = 0;
		i++;
	}
}
