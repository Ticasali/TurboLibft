/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:10:25 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/11 21:21:39 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, void const *src, size_t n)
{
	size_t				ct;
	unsigned char		*ret;
	unsigned const char	*cpy;

	ct = 0;
	if (n == 0)
		return (dest);
	ret = (unsigned char *)(dest);
	cpy = (unsigned const char *)(src);
	if (dest < src)
	{
		while (ct < n - 1)
		{
			ret[ct] = cpy[ct];
			ct++;
		}
		ret[ct] = cpy[ct];
		return (ret);
	}
	while (n != 0)
	{
		n--;
		ret[n] = cpy[n];
	}
	return (ret);
}
