/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:59:31 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/11 20:58:12 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
