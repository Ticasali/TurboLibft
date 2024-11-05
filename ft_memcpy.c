/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:09:11 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/06 00:10:07 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  ct;
    char    *ret;
    const char  *cpy;

    if (dest == NULL || src == NULL)
        return (dest);
    ct = 0;
    ret = (char *)(dest);
    cpy = (const char *)(src);
    while (cpy[ct] && ct < n)
    {
        ret[ct] = cpy[ct];
        ct++;
    }
    return (ret);
}