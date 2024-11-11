/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:57:32 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/11 20:42:29 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	ct;
	char	*str;

	ct = 0;
	str = (char *)(s);
	while (ct < n)
	{
		str[ct] = '\0';
		ct++;
	}
}
