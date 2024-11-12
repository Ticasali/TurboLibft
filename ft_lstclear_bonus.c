/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:25:15 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/12 09:42:12 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
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
