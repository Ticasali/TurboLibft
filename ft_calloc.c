/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:59:22 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/11 22:11:11 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdint.h>

static void	*ft_memset_alloc(void *s, int c, size_t n)
{
	size_t			ct;
	unsigned char	*ret;
	unsigned char	cast;

	ct = 0;
	ret = (unsigned char *)(s);
	cast = (unsigned char)(c);
	while (ct < n)
	{
		ret[ct] = cast;
		ct++;
	}
	return ((void *)(ret));
}

void	*ft_calloc(size_t nmenb, size_t size)
{
	void	*ret;

	if (nmenb == 0 || size == 0)
		return (NULL);
	if ((SIZE_MAX / nmenb) < size)
		return (NULL);
	ret = malloc(nmenb * size);
	if (ret == NULL)
		return (NULL);
	return (ft_memset_alloc(ret, '\0', nmenb * size));
}
