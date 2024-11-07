/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:17:51 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/07 23:30:03 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	unsigned int	ct;
	size_t	ctl;

	if (s == NULL)
		return (NULL);
	ret = malloc(sizeof(char) * len);
	if (ret == NULL)
		return (NULL);
	ct = 0;
	while (s[ct] && ct < start)
		ct++;
	if (s[ct] == '\0')
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