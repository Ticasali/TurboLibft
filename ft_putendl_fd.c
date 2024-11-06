/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:13:07 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/06 02:40:03 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t static	ft_countstr(char *str)
{
	size_t	ret;

	ret = 0;
	while (str[ret])
		ret++;
	return (ret);
}

void	ft_putendl_fd(char *s, int fd)
{
	if (fd == -1)
		return ;
	write(fd, s, ft_countstr(s));
	write(fd, "\n", 1);
}