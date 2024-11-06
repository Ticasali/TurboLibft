/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 00:49:23 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/06 01:48:32 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_
#define	LIBFT_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stddef.h>

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

char	*ft_strdup(char const *str);
char	*ft_strchr(char const *str, int c);
char	*ft_strrchr(char const *str, int c);
char	*ft_strnstr(char const *str, char const *find, size_t n);
size_t	ft_strlen(char const *str);
int		ft_atoi(char const *str);
int		ft_strncmp(char const *s1, char const *s2, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	bz_zero(void *s, size_t n);

#endif