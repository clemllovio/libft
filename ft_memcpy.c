/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:06:08 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/10 10:52:01 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    size_t        i;
    char        *vdest;
    const char  *vsrc;

    vdest = (char *) dest;
    vsrc = (const char *) src;
    i = 0;
    while(i < n)
    {
        vdest[i] = vsrc[i];
        i++;
    }
    return(dest);
}

#include <stdio.h>


int main ()
{
	char dest[] = "almost every programmer should know memset!";
    const char src [] = "bonjour";

	printf("ft_ : %s", ft_memcpy(dest, src, 7));
	printf("og : %s", memcpy(dest, src, 7));
}