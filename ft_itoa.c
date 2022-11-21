/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:04:27 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/21 15:44:38 by cllovio          ###   ########.fr       */
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
	int	temp;
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s);
	while (i < (len / 2))
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
	return (s);
}

char	*ft_convert(int n)
{
	int		i;
	int		sign;
	char	*s;

	i = 0;
	sign = 1;
	s = malloc(sizeof(char) * (ft_count(n) + 1));
	if (!s)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		sign = -1;
	}
	while (n > 0)
	{
		s[i++] = (n % 10) + 48;
		n = n / 10;
	}
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	ft_rev_tab(s);
	return (s);
}

char	*ft_itoa(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	return (ft_convert(n));
}
