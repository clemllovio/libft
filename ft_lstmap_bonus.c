/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:16:07 by cllovio           #+#    #+#             */
/*   Updated: 2024/10/01 10:07:35 by cllovio          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new_content;
	char	*fonction;

	if (!(lst) || !del || !(f))
		return (NULL);
	new_content = NULL;
	while (lst)
	{
		fonction = f(lst->content);
		tmp = ft_lstnew(fonction);
		if (!(tmp))
		{
			del(fonction);
			ft_lstclear(&new_content, del);
			return (NULL);
		}
		ft_lstadd_back(&new_content, tmp);
		lst = lst->next;
	}
	return (new_content);
}
