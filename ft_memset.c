/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:53:54 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/10 10:52:06 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *b, int c, unsigned int len)
{
		unsigned int i;
		unsigned char *bb;

		i = 0;
		bb = (unsigned char *) b;
		while (i < len)
		{
				bb[i] = (unsigned char) c;
				i++;
		}
		return (b);
}

#include <stdio.h>
#include <string.h>

int main ()
{
	char str[] = "almost every programmer should know memset!";
	ft_memset (str,'-',6);
	puts (str);
	return 0;
}