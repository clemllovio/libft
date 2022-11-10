/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:52:36 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/10 13:35:16 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
unsigned int  ft_strlen(const char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return(i);
}

/*void    *ft_memmove(void *dest, const void *src, size_t len)
{
	size_t i;
	char *vdest;
	char *inter = NULL;
	const char *vsrc;

	i = 0;
	vdest = (char *)dest;
	vsrc = (const char *)src;
	while (i < len)
	{
		inter[i] = vsrc[i];
		i++;
	} 
	i = 0;
	while (inter[i] != '\0')
	{
		vdest[i] = inter[i];
		i++;
	} 
	return(dest);
}*/

void *ft_memmove(void *dest, const void *src, size_t len)
{
	size_t  i;
	char *new_dest;
	const char *new_src;

	i = 0;
	new_dest = (char *) dest;
	new_src = (const char *) src;
	if (new_dest <= new_src)
	{
		while (i < len)
		{
			new_dest[i] = new_src[i];
			i++;
		}
	}
	else 
	{
		while ( len  > 0)
		{
			new_dest[len] = new_src[len];
			len --;
		}
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char csrc[100] = "Geeksfor";
	ft_memmove(csrc + 5, csrc, strlen(csrc) + 1);
	printf("%s", csrc);
	return 0;
}