/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:16:45 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/11 22:10:38 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_countlen(char const *str)
{
	size_t		ret;

	ret = 0;
	while (str[ret])
		ret++;
	return (ret);
}

static char	*ft_strcpy(char *ret, char const *s)
{
	size_t	ct_ret;
	size_t	ct_s;

	ct_s = 0;
	ct_ret = 0;
	while (ret[ct_ret] != '\0')
		ct_ret++;
	while (s[ct_s] != '\0')
	{
		ret[ct_ret] = s[ct_s];
		ct_s++;
		ct_ret++;
	}
	ret[ct_ret] = '\0';
	return (ret);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;

	ret = malloc(sizeof(char) * (ft_countlen(s1) + ft_countlen(s2)) + 1);
	if (ret == NULL)
		return (NULL);
	ret[0] = '\0';
	if (s1 != NULL)
		ret = ft_strcpy(ret, s1);
	if (s2 != NULL)
		ret = ft_strcpy(ret, s2);
	return (ret);
}
