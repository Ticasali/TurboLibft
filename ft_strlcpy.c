/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 00:48:14 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/13 13:47:58 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char const *src, size_t size)
{
	size_t	cmp;
	size_t	len;

	cmp = 0;
	len = ft_strlen(src);
	if (size < 1)
		return (len);
	while (src[cmp] != '\0' && cmp < size - 1)
	{
		dest[cmp] = src[cmp];
		cmp++;
	}
	dest[cmp] = '\0';
	return (len);
}
