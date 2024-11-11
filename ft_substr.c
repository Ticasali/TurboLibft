/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:17:51 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/11 22:12:32 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_strsublen(char const *str, size_t len)
{
	size_t	ret;

	ret = 0;
	while (str[ret] && ret < len)
		ret++;
	return (ret);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	ct;
	unsigned int	ctl;

	ct = 0;
	while (s[ct] && ct < start)
		ct++;
	ret = malloc(sizeof(char) * ft_strsublen(&s[ct], len) + 1);
	if (ret == NULL)
		return (NULL);
	ctl = 0;
	while (s[ct] && ctl < len)
	{
		ret[ctl] = s[ct];
		ctl++;
		ct++;
	}
	ret[ctl] = '\0';
	return (ret);
}
