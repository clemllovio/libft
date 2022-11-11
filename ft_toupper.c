/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 08:22:51 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/11 10:10:37 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	unsigned char	character;

	character = (unsigned char) c;
	if (character >= 'a' && character <= 'z')
	{
		character = character - 32;
	}
	return (character);
}