/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 00:53:05 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/13 13:40:16 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_u_len(char const *str)
{
	size_t	cmp;

	cmp = 0;
	while (str[cmp] != '\0')
		cmp++;
	return (cmp);
}

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	size_t	cmp_s;
	size_t	cmp_d;
	size_t	ret;
	size_t	lensrc;

	cmp_s = 0;
	cmp_d = ft_u_len(dest);
	lensrc = ft_u_len(src);
	if (size <= cmp_d)
		return (lensrc + size);
	ret = cmp_d;
	while (src[cmp_s] != '\0' && cmp_s < size - cmp_d - 1)
	{
		dest[ret] = src[cmp_s];
		ret++;
		cmp_s++;
	}
	dest[ret] = '\0';
	return (cmp_d + lensrc);
}
