/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:27:32 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/11 10:10:39 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int  ft_strlen(const char *s)
{
    unsigned int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return(i);
}

unsigned int ft_strlcat(char *dest, const char *src, unsigned int destsize)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    while (dest[i] != '\0')
        i++;
    j = 0;
    if (destsize == 0 || destsize < ft_strlen(dest))
    {
        return(ft_strlen(src) + destsize);
    }
    while (src[j] != '\0' && i < destsize - 1)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    if (destsize > 0 && ft_strlen(dest) > destsize)
        dest[i] = '\0';
    return (ft_strlen(src) + ft_strlen(dest));
}