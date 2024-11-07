/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:02:07 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/07 16:12:47 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char const *str)
{
	int		ret;
	int		sign;
	int		ct;

	sign = 1;
	ret = 0;
	ct = 0;
	while ((str[ct] >= 9 && str[ct] <= 13) || (str[ct] == ' '))
		ct++;
	if (str[ct] == '-' || str[ct] == '+')
		if (str[ct++] == '-')
			sign = -1;
	while (str[ct] >= 47 && str[ct] <= 58)
	{
		ret += str[ct] - 48;
		if (str[++ct] >= 47 && str[ct] <= 58)
			ret *= 10;
	}
	return (ret * sign);
}

int		main(int ac, char **av)
{
	printf("%d\n", ft_atoi(av[1]));
	printf("%d\n", atoi(av[1]));
}