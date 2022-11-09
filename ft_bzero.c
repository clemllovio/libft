/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:28:05 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/09 15:53:26 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_bzero(void *s, unsigned int n)
{
    unsigned int i;
    unsigned char *ss;

    i = 0;
    ss = (unsigned char *) s;
    while(i < n)
    {
        ss[i] = 0;
        i++;
    }
}

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "almost every programmer should know memset!";
    ft_bzero (str, 10);
    puts (str);
    return 0;
}

