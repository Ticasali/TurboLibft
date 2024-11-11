/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:33:42 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/11 20:54:16 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_lstadd_back_temp(t_list **alst, t_list *new)
{
	t_list	*temp;

	if (alst[0] == NULL)
		alst[0] = new;
	else
	{
		temp = alst[0];
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
}

static void	ft_lstclear_temp(t_list **lst, void (*del)(void *))
{
	t_list	*cpy;

	while (*lst != NULL)
	{
		cpy = *lst;
		*lst = cpy->next;
		(del)(cpy->content);
		free(cpy);
	}
	*lst = NULL;
}

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
			ft_lstclear_temp(&ret, del);
			return (NULL);
		}
		node->content = (f)(lst->content);
		node->next = NULL;
		ft_lstadd_back_temp(&ret, node);
		lst = lst->next;
	}
	return (ret);
}
