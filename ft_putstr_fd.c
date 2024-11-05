/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:15:27 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/06 00:15:41 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t static  ft_strlen(char *str)
{
    size_t  ret;

    ret = 0;
    while (str[ret])
        ret++;
    return (ret);
}

void    ft_putstr_fd(char *s, int fd)
{
    if (fd == -1)
        return ;
    write(fd, s, ft_strlen(s));
}