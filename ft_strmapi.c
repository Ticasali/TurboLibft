/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 03:26:50 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/11 20:59:38 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	ct;
	char			*ret;

	ct = 0;
	while (s[ct])
		ct++;
	ret = malloc(sizeof(char) * ct + 1);
	if (ret == NULL)
		return (NULL);
	ct = 0;
	while (s[ct] != '\0')
	{
		ret[ct] = (f)(ct, s[ct]);
		ct++;
	}
	ret[ct] = '\0';
	return (ret);
}
