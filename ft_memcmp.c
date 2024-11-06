/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:08:33 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/06 02:01:43 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(void const *s1, void const *s2, size_t n)
{
	size_t ct;
	char const  *scpy1;
	const char  *scpy2;

	scpy1 = (char const *)(s1);
	scpy1 = (char const*)(s2);
	if (scpy1 == NULL && scpy2 == NULL)
		return (0);
	if (scpy1 == NULL && scpy2 != NULL)
		return (scpy2[0]);
	if (s1 != NULL && s2 == NULL)
		return (scpy1[0]);
	ct = 0;
	while (scpy1[ct] && scpy2[ct] && ct < n)
	{
		if (scpy1[ct] != scpy2[ct])
			return (scpy1[ct] - scpy2[ct]);
		ct++;
	}
	return (scpy1[ct] - scpy2[ct]);
}