/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:39:28 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/11 16:39:52 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char character;
    unsigned char *string;
    size_t i;

    character = (unsigned char) c;
    string = (unsigned char *) s;
    i = 0;
    while (string[i] != character && string[i] && i < n)
        i++;
    if (string[i] == character)
        return(&string[i]);
    return (0);
}