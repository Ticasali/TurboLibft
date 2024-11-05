/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:16:45 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/06 00:17:30 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_countlen(char const *str)
{
    int     ret;

    if (str == NULL)
        return (0);
    ret = -1;
    while (str[++ret])
        ;
    return (ret);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *ret;
    int     ct_ret;
    int     ct_str;

    ret = malloc(sizeof(char) * (ft_countlen(s1) + ft_countlen(s2) + 1));
    if (ret == NULL)
        return (NULL);
    ct_ret = -1;
    ct_str = -1;
    if (s1 != NULL)
        while (s1[++ct_str])
            ret[++ct_ret] = s1[ct_str];
    ct_str = -1;
    if (s2 != NULL)
        while (s2[++ct_str])
            ret[++ct_ret] = s2[ct_str];
    ret[++ct_ret] = '\0';
    return (ret);
}