/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:29:16 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/11 10:14:12 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (s1[i] == s2[i] && i <= n && s1[i] != '\0')
        i++;
    return (s1[i] - s2[i]);
}
