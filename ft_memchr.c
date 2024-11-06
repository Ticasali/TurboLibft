/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:07:57 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/06 02:00:16 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(void const *s, int c, size_t n)
{
	size_t	ct;
	char const	*ret;

	if (s == NULL)
		return (NULL);
	if (c < -127 || c > 127)
		return (NULL);
	ret = (const char *)(s);
	ct = 0;
	while (ret[ct])
	{
		if (ret[ct] == c)
			return (&ret[ct]);
		ct++;
	}
	if (c == 0)
		return (&ret[ct]);
	return (NULL);
}