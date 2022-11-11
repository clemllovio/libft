/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:28:05 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/11 10:10:42 by cllovio          ###   ########.fr       */
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