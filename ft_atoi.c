/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:02:07 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/11 22:21:31 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

int	ft_atoi(char const *str)
{
	unsigned long	ret;
	int				sign;
	size_t			ct;

	sign = 1;
	ret = 0;
	ct = 0;
	while ((str[ct] >= 9 && str[ct] <= 13) || (str[ct] == ' '))
		ct++;
	if (str[ct] == '-' || str[ct] == '+')
		if (str[ct++] == '-')
			sign = -1;
	while (str[ct] > 47 && str[ct] < 58)
	{
		ret += str[ct] - 48;
		if ((str[++ct] > 47 && str[ct] < 58))
			ret *= 10;
	}
	if (((LLONG_MAX) < ret) && sign == 1)
		return (-1);
	if (((LLONG_MAX) < ret) && sign == -1)
		return (0);
	return ((int)(ret * sign));
}
