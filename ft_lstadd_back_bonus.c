/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:01:09 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/12 17:30:45 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst[0] == NULL)
		lst[0] = new;
	else
	{
		temp = lst[0];
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
}
