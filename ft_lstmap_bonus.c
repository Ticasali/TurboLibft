/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:33:42 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/08 01:48:41 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*cpy;

	cpy = malloc(sizeof(t_list));
	ret = cpy;
	while (lst != NULL)
	{
		cpy->next = malloc(sizeof(t_list));
		cpy->content = (f)(lst->content);
		(del)(lst->content);
		cpy = cpy->next;
	}
	cpy = NULL;
	return (ret);
}