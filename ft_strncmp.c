/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 03:17:39 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/05 14:43:47 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t	ct;

	ct = 0;
	while ((s1[ct] == s2[ct]) && (ct < n - 1) && (s1[ct]) && (s2[ct]))
		ct++;
	return (s1[ct] - s2[ct]);
}

int		main(int ac, char **av)
{
	printf("%d\n", ft_strncmp(av[1], av[2], 5));
	printf("%d\n", strncmp(av[1], av[2], 5));
}