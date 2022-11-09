/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:27:32 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/09 16:05:30 by cllovio          ###   ########.fr       */
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

#include <stdio.h>
#include <string.h>

int main(void)
{
    char dest[15] = "azertysd";
    const char src[7] = "qwerty";
    
    printf("%lu\n%s", strlcat(dest, src, 0), dest);
}