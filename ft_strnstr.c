/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:44:17 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/09 12:27:18 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *hastack, const char *needle, unsigned int len)
{
    unsigned int i;
    unsigned int j;
    
    i = 0;
    while (hastack[i])
    {
        if (hastack[i] == needle [0])
            j = 1;
            while (hastack[i + j] == needle [j])
                j++;
            if (needle[j] == '\0')
                return ((char *)(&hastack[i - len]));
        i++;
    }
    return(0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    const char haystack[11] = "abcdefghij";
    const char needle[3] = "de";

    printf("ft_ : %s\nog : %s", ft_strnstr(haystack, needle, 3), strnstr(haystack, needle, 3));
}