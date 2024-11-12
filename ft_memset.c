/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:11:06 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/12 09:38:18 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
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
