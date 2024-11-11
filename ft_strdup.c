/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:38:01 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/11 21:07:39 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char const *str)
{
	size_t	ct;
	char	*ret;

	ct = 0;
	while (str[ct])
		ct++;
	ret = malloc(sizeof(char) * (ct + 1));
	if (ret == NULL)
		return (NULL);
	ct = 0;
	while (str[ct])
	{
		ret[ct] = str[ct];
		ct++;
	}
	ret[ct] = '\0';
	return (ret);
}
