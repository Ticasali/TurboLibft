/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 03:05:16 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/12 09:39:33 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	size_t			ct;
	unsigned char	cast;

	ct = 0;
	cast = (unsigned char)(c);
	while (str[ct] != '\0')
		ct++;
	while (ct != 0)
	{
		if (str[ct] == cast)
			return ((char *)(&str[ct]));
		ct--;
	}
	if (str[ct] == cast)
		return ((char *)(&str[ct]));
	if (cast == 0)
		return ((char *)(&str[ct]));
	return (NULL);
}
