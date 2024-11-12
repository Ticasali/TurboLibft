/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 03:41:04 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/12 16:24:44 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	ct;

	ct = 0;
	while (s[ct] != '\0')
	{
		(f)(ct, &s[ct]);
		ct++;
	}
}
