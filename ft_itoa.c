/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:04:27 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/18 10:38:00 by cllovio          ###   ########.fr       */
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
	int temp;
	int i;
	int len;

	i = 0;
	len = ft_strlen(s);
	while (i < (len /2))
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		sign;


	s = malloc(sizeof(char) * (ft_count(n) + 1));
	if (!s)
		return (NULL);
	i = 0;
	sign = 1;
	if (n < 0)
	{
		n = n * -1;
		sign = -1;
	}
	while (n > 0)
	{
		s[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	if (sign < 0)
	{
		s[i] = '-';
		i++;
	}
	s[i] = '\0';
	ft_rev_tab(s);
	return (s);
}
