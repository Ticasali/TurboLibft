/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:33:42 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/12 17:31:20 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*node;

	ret = NULL;
	while (lst != NULL)
	{
		node = malloc(sizeof(t_list));
		if (node == NULL)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		node->content = (f)(lst->content);
		node->next = NULL;
		ft_lstadd_back(&ret, node);
		lst = lst->next;
	}
	return (ret);
}
