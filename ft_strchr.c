/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:59:31 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/05 03:11:55 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *str, int c)
{
	int		ct;

	ct = -1;
	while (str[++ct] != '\0')
		if (str[ct] == c)
			return ((char *)(&str[ct]));
	if (c == 0)
		return ((char *)(&str[ct]));
	return (NULL);
}

int		main(int ac, char **av)
{
	printf("%s\n", ft_strchr(av[1], av[2][0]));
	printf("%s\n", strchr(av[1], av[2][0]));
}