/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:36:12 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/21 18:57:04 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list = malloc(sizeof(t_list));
	if (!(t_list))
		return (NULL);
	t_list -> content = content;
	t_list -> next = NULL;
	return (t_list);
}

#include <stdio.h>

int	main(void)
{
	t_list = ft_lstnew("bonjour");
	while (t_list)
	{
		printf("%d\n", t_list -> content);
		t_list = t_list -> next;
	}
}