/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 03:17:39 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/12 09:39:23 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t				ct;
	unsigned const char	*casts1;
	unsigned const char	*casts2;

	casts1 = (unsigned const char *)(s1);
	casts2 = (unsigned const char *)(s2);
	ct = 0;
	if (n == 0)
		return (0);
	while (((casts1[ct]) || (casts2[ct])) && (ct < n - 1))
	{
		if (casts1[ct] != casts2[ct])
			return (casts1[ct] - casts2[ct]);
		ct++;
	}
	return (casts1[ct] - casts2[ct]);
}
