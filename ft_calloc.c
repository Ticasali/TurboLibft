/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:59:22 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/12 22:08:28 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmenb, size_t size)
{
	void	*ret;

	if (nmenb == 0 || size == 0)
		return (malloc(0));
	if ((SIZE_MAX / nmenb) < size)
		return (NULL);
	ret = malloc(nmenb * size);
	if (ret == NULL)
		return (NULL);
	return (ft_memset(ret, '\0', nmenb * size));
}
