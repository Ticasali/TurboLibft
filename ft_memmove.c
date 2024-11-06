/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:10:25 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/06 02:10:56 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t n)
{
	size_t		ct;
	char		*ret;
	char		c;
	char const	*cpy;

	if (dest == NULL || src == NULL)
		return (dest);
	ct = 0;
	ret = (char *)(dest);
	cpy = (char const *)(src);
	while (cpy[ct] && ct < n)
	{
		c = cpy[ct];
		ret[ct] = c;
		ct++;
	}
	return (ret);
}
