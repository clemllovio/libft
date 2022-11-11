/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:52:36 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/11 13:56:23 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memmove(void *dest, const void *src, size_t len)
{
	char *vdest;
	const char *vsrc;

	vdest = (char *)dest;
	vsrc = (const char *)src;
	if (vdest <= vsrc)
		ft_memcpy(dest, src, len);
	else
//pourquoi len + 1 ??? 
		while ((len + 1) > 0)
		{
			vdest[len] = vsrc[len]; 
			len--;
		}
	return(&vdest[len]);
}