/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:15:59 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/06 02:45:39 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_free_all(char **tab)
{
	int		ct;

	ct = -1;
	if (tab == NULL)
		return ;
	while (tab[++ct])
		free(tab[ct]);
	free(tab);
}

static int	ft_count_words(char const *s, char c)
{
	int		ret;
	int		ct;
	int		check;

	ct = 0;
	ret = 0;
	check = 0;
	while (s[ct])
	{
		if (s[ct] == c)
		{
			while (s[ct] == c)
				ct++;
			check = 0;
		}
		if (s[ct] != c && s[ct] != '\0')
		{
			if (check == 0)
				ret++;
			while (s[ct] != c && s[ct] != '\0')
				ct++;
			check = 1;
		}
	}
	return (ret);
}

static char	*ft_strdup_c(char const *s, char c)
{
	int		ct;
	char	*ret;

	ct = 0;
	while (s[ct] != '\0' && s[ct] != c)
		ct++;
	ret = malloc(sizeof(char) * ct + 1);
	if (ret == NULL)
		return (NULL);
	ct = 0;
	while (s[ct] != '\0' && s[ct] != c)
	{
		ret[ct] = s[ct];
		ct++;
	}
	ret[ct] = '\0';
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		ct;
	int		ct_tab;

	ret = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (ret == NULL)
		return (NULL);
	ct = 0;
	ct_tab = -1;
	while (s[ct] != '\0')
	{
		while (s[ct] == c)
			ct++;
		if (s[ct] != '\0')
		{
			ret[++ct_tab] = ft_strdup_c(&s[ct], c);
			if (ret[ct_tab] == NULL)
				return (ft_free_all(ret), NULL);
		}
		while (s[ct] != c && s[ct] != '\0')
			ct++;
	}
	ret[ct_tab + 1] = NULL;
	return (ret);
}