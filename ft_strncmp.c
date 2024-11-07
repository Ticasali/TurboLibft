/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 03:17:39 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/07 23:31:50 by ticasali         ###   ########.fr       */
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