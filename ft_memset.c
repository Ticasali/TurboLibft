/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:11:06 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/06 02:14:39 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	ct;
	char	*ret;

	if (s == NULL)
		return (NULL);
	if (c < -127 || c > 127)
		return (s);
	ct = 0;
	ret = (char *)(s);
	while (ct < n)
	{
		ret[ct] = c;
		ct++;
	}
	return ((void *)(ret));
}