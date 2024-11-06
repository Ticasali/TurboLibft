/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:00:03 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/06 01:43:16 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *ft_revstr(char *ret)
{
	int     fst;
	int     lst;
	char    c;

	lst = -1;
	fst = 0;
	while (ret[++lst])
		;
	lst--;
	if (ret[fst] == '-')
		fst++;
	while (fst < lst)
	{
		c = ret[fst];
		ret[fst] = ret[lst];
		ret[lst] = c;
		fst++;
		lst--;
	}
	return (ret);
}

static char *ft_int_min(char *ret)
{
	ret[0] = '-';
	ret[1] = '2';
	ret[2] = '1';
	ret[3] = '4';
	ret[4] = '7';
	ret[5] = '4';
	ret[6] = '8';
	ret[7] = '3';
	ret[8] = '6';
	ret[9] = '4';
	ret[10] = '8';
	ret[11] = '\0';
	return (ret);
}

char	*ft_itoa(int n)
{
	char    *ret;
	int     ct;

	ct = 0;
	ret = malloc(sizeof(char) * 12);
	if (ret == NULL)
		return (NULL);
	if (n == -2147483648)
		return (ft_int_min(ret));
	if (n < 0)
	{
		n *= -1;
		ret[ct] = '-';
		ct++;
	}
	while (n >= 10)
	{
		ret[ct] = (n % 10) + 48;
		n /= 10;
		ct++;
	}
	ret[ct] = n + 48;
	return (ft_revstr(ret));
}