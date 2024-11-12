/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:08:33 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/12 09:38:01 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	size_t				ct;
	unsigned const char	*scpy1;
	unsigned const char	*scpy2;

	scpy1 = (unsigned const char *)(s1);
	scpy2 = (unsigned const char *)(s2);
	ct = 0;
	if (n == 0)
		return (0);
	while (ct < n)
	{
		if (scpy1[ct] != scpy2[ct])
			return (scpy1[ct] - scpy2[ct]);
		ct++;
	}
	return (scpy1[ct - 1] - scpy2[ct - 1]);
}
