/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:25:15 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/08 00:11:59 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	int		ct;

	ct = -1;
	t_list *cpy = lst[0];
	while (lst[++ct] != NULL)
	{
		(del)(lst[ct]->content);
		free(lst[ct]);
	}
	(void)(cpy);
	cpy = NULL;
}