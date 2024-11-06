/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:57:32 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/06 01:39:14 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	ct;
	char	*str;

	if (s == NULL)
		return ;
	ct = 0;
	str = (char *)(s);
	while (ct < n)
	{
		str[ct] = '\0';
		ct++;
	}
}