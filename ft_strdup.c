/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:38:01 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/05 02:46:41 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *str)
{
	int		ct;
	char	*ret;

	ct = -1;
	while (str[++ct])
		;
	ret = malloc(sizeof(ct + 1));
	if (!ret)
		return (NULL);
	ct = -1;
	while (str[++ct])
		ret[ct] = str[ct];
	ret[ct] = '\0';
	return (ret);
}

int		main(int ac, char **av)
{
	printf("%s\n", strdup(av[1]));
	printf("%s\n", strdup(av[1]));
}