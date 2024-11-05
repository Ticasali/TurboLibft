/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:46:33 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/05 15:00:15 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *str, char const *find, size_t n)
{
	size_t	ct;
	size_t	ct_l;
	size_t	len;

	ct = 0;
	len = 0;
	if (len > n)
		len = n;
	while (find[len] != '\0')
		len++;
	while (str[ct] != '\0')
	{
		if (str[ct] == find[0])
		{
			ct_l = 0;
			while (str[ct + ct_l] == find[ct_l] && ct_l < n && str[ct + ct_l] != '\0' && find[ct_l] != '\0')
				ct_l++;
			if (ct_l == len)
				return ((char *)(&str[ct]));
		}
		ct++;
	}
	return (NULL);
}

int		main(int ac, char **av)
{
	printf("%s\n", ft_strnstr(av[1], av[2], 5));
}