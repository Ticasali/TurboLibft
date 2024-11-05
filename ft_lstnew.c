/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:04:06 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/06 00:04:32 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *ret;

    ret = malloc(sizeof(t_list));
    if (ret == NULL)
        return (NULL);
    ret->content = content;
    ret->next = NULL;

    return (ret);
}