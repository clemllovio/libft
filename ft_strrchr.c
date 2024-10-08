/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:06:26 by cllovio           #+#    #+#             */
/*   Updated: 2024/10/01 10:07:35 by cllovio          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	character;
	int		len;
	char	*str;

	character = (char)c;
	str = (char *)s;
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == character)
			return (&str[len]);
		len--;
	}
	if (character == 0)
		return (&str[ft_strlen(str) + 1]);
	return (0);
}
