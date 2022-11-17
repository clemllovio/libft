/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:04:27 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/17 18:35:45 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int n)
{
	int	count;
	int	div;

	count = 0;
	div = 1;
	if (n <= 0)
	{
		n = n * -1;
		count++;
	}
	while (n / div > 0)
	{
		div = div * 10;
		count++;
	}
	return (count);
}

char	*ft_rev_tab(char *s)
{
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;

	s = malloc(sizeof(char) * (ft_count(n) + 1));
	if (!s)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		n = n * -1;
		s[i] = '-';
		i++;
	}
	while (n > 9)
	{
		s[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	if (n >= 0 && n <= 9)
	{
		s[i] = n + 48;
		i++;
	}
	s[i] = '\0';
	return (s);
}
