/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:16:53 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/11 10:28:24 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *n_s1;
    unsigned char *n_s2;
    size_t i;

    n_s1 = (unsigned char *) s1;
    n_s2 = (unsigned char *) s2;
    i = 0;
    while (n_s1[i] == n_s2[i] && n_s1[i] && i < n)
        i++;
    return(n_s1[i] - n_s2[i]);
}

//faire nouveau main est retester car resultats bizarre