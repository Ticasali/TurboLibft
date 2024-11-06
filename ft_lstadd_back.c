/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:01:09 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/06 00:02:00 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list  *temp;

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