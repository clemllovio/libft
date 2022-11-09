/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:13:42 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/07 14:13:45 by cllovio          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
    if (c >= 0 && c <= 9)
        return (1);
    else
        return (0);
}