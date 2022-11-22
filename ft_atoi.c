/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:09:33 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/22 17:03:51 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result != (result * 10 + (str[i] - '0') / 10) && sign == -1)
			return (-1);
		if (result != (result * 10 + (str[i] - '0') / 10) && sign == 1)
			return (0);
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * sign);
}
