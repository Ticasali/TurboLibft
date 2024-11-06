/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:06:48 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/07 00:42:41 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_allocate_lenght(char const *s1, char const *set)
{
	int		ct;
	int		ct_set;
	int		val;
	char	*ret;
	int		check;

	ct = -1;
	val = 0;
	while (s1[++ct] != '\0')
	{
		ct_set = -1;
		check = 0;
		while (set[++ct_set] != '\0')
			if (set[ct_set] == s1[ct])
				check++;
		if (check == 0)
			val++;
	}
	ret = malloc(sizeof(char) * val + 1);
	return (ret);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		ct;
	int		ct_set;
	int		ct_ret;
	char	*ret;
	int		check;

	ct = -1;
	ct_ret = -1;
	ret = ft_allocate_lenght(s1, set);
	if (ret == NULL)
		return (NULL);
	while (s1[++ct] != '\0')
	{
		ct_set = -1;
		check = 0;
		while (set[++ct_set] != '\0')
			if (set[ct_set] == s1[ct])
				check++;
		if (check == 0)
			ret[++ct_ret] = s1[ct];
	}
	ret[++ct_ret] = '\0';
	return (ret);
}

int		main(int ac, char **av)
{
	printf("%s\n", ft_strtrim(av[1], av[2]));
}