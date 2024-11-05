/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:29:18 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/05 02:37:05 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const *str)
{
	size_t	ret;

	ret = 0;
	while (str[ret] != '\0')
		ret++;
	return (ret);
}

int		main(int ac, char **av)
{
	printf("%d\n", ft_strlen(av[1]));
	printf("%d\n", strlen(av[1]));
}