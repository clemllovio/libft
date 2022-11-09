/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:57:42 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/08 15:23:16 by cllovio          ###   ########.fr       */
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

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int destsize)
{
    unsigned int i;

    i = 0;
    while (src[i] != '\0' && i <= destsize - 1)
    {
        dest[i] = src[i];
        i++;
    }
    if (destsize > 0)
    {
        dest[i] = '\0';
        return (ft_strlen(src));
    }
    return (0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char dest[7] = "azerty";
    const char src[7] = "qwerty";
    
    printf("%u\n%s", ft_strlcpy(dest, src, 7), dest);
}