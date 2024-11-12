/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:07:57 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/12 09:37:55 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	size_t				ct;
	unsigned const char	*ret;
	unsigned char		cast;

	if (n == 0)
		return (NULL);
	cast = (unsigned char)(c);
	ret = (unsigned const char *)(s);
	ct = 0;
	while (ct < n)
	{
		if (ret[ct] == cast)
			return ((void *)&ret[ct]);
		ct++;
	}
	if (cast == 0 && ret[ct] == cast)
		return ((void *)&ret[ct]);
	return (NULL);
}
