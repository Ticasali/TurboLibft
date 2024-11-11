/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:09:11 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/11 21:13:48 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dest, void const *src, size_t n)
{
	size_t				ct;
	unsigned char		*ret;
	unsigned const char	*cpy;

	if (n == 0)
		return (dest);
	ct = 0;
	ret = (unsigned char *)(dest);
	cpy = (unsigned const char *)(src);
	while (ct < n)
	{
		ret[ct] = cpy[ct];
		ct++;
	}
	return ((void *)(ret));
}
