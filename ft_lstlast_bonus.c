/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:57:59 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/21 11:57:48 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	int len;
	int i;

	len = ft_lstsize(lst);
	i = 0;
	while (i != len)
	{
		lst = lst -> next;
		i++;
	}
	return (lst);
}
