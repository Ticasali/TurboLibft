/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:06:48 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/11 22:12:40 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_check_char(char c, char const *set)
{
	size_t	ct;

	ct = 0;
	while (set[ct])
	{
		if (c == set[ct])
			return (0);
		ct++;
	}
	return (1);
}

static size_t	ft_allocate_lenght(char const *s1, char const *set)
{
	size_t	ct;
	size_t	ret;

	ct = 0;
	ret = 0;
	while (s1[ct] && (ft_check_char(s1[ct], set) == 0))
		ct++;
	while (s1[ct])
	{
		ct++;
		ret++;
	}
	while (s1[--ct] && (ft_check_char(s1[ct], set) == 0) && ret > 0)
		ret--;
	return (ret);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	ct;
	size_t	ct_ret;
	size_t	val;
	char	*ret;

	ct = 0;
	ct_ret = 0;
	val = ft_allocate_lenght(s1, set);
	ret = malloc(sizeof(char) * (val) + 1);
	if (ret == NULL)
		return (NULL);
	while (s1[ct] && ft_check_char(s1[ct], set) == 0)
		ct++;
	while (s1[ct] && ct_ret < val)
	{
		ret[ct_ret] = s1[ct];
		ct++;
		ct_ret++;
	}
	ret[ct_ret] = '\0';
	return (ret);
}
