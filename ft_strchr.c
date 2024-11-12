/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:59:31 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/12 09:38:43 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *str, int c)
{
	size_t			ct;
	unsigned char	cast;

	ct = 0;
	cast = (unsigned char)(c);
	while (str[ct] != '\0')
	{
		if (str[ct] == cast)
			return ((char *)(&str[ct]));
		ct++;
	}
	if (cast == 0)
		return ((char *)(&str[ct]));
	return (NULL);
}
