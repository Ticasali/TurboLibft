/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 03:05:16 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/05 03:17:01 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	int		ct;

	ct = -1;
	while (str[++ct] != '\0')
		;
	while (--ct >= 0)
		if (str[ct] == c)
			return ((char *)(&str[ct]));
	if (c == 0)
		return ((char *)(&str[ct]));
	return (NULL);
}

int		main(int ac, char **av)
{
	printf("%s\n", ft_strrchr(av[1], av[2][0]));
	printf("%s\n", strrchr(av[1], av[2][0]));
}