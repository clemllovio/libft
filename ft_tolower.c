/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 08:33:32 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/11 10:10:35 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	unsigned char	character;

	character = (unsigned char) c;
	if (character >= 'A' && character <= 'Z')
	{
		character = character + 32;
	}
	return (character);
}