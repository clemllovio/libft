/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:15:27 by cllovio           #+#    #+#             */
/*   Updated: 2023/03/11 10:27:20 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	int	i;

	if (!(lst))
		return ;
	i = 0;
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
