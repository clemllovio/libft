/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:44:17 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/11 15:19:08 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
    unsigned int i;
    unsigned int j;
    
    i = 0;
    while (haystack[i])
    {
        j = 0;
        if (haystack[i] == needle [j])
            while (haystack[i] == needle [j] && j < len && neddle[j])
            {
              i++;
              j++;
            }
        if (needle[j] == '\0')
            return ((char *)(&haystack[i - j]));
        i++;
    }
    return(0);
}

#include <string.h>
#include <stdio.h>

int main (void)
{
    const char haystack[9] = "bounjour";
    const char needle[9] = "bonjour";

    printf("%s\n", ft_strnstr(haystack, needle, 4));
    printf("%s\n", strnstr(haystack, needle, 9));
}