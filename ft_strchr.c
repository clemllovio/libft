/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 08:35:21 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/12 14:50:41 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	character;
	int		i;

	character = (char) c;
	i = 0;
	while (s[i] != character && s[i])
		i++;
	if (s[i] == character)
		return ((char *) &s[i]);
	if (character == 0)
		return ((char *) &s[i]);
	return (0);
}
