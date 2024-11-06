/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 00:49:23 by ticasali          #+#    #+#             */
/*   Updated: 2024/11/06 03:16:08 by ticasali         ###   ########.fr       */
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

//t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
char	**ft_split(char const *s, char c);
//char	*ft_strtrim(char const *s1, char const *set);
//char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strdup(char const *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(char const *str, int c);
char	*ft_strrchr(char const *str, int c);
char	*ft_strnstr(char const *str, char const *find, size_t n);
void	*ft_calloc(size_t nmeb, size_t size);
void	*ft_memchr(void const *s, int c, size_t n);
void	*ft_memcpy(void *dest, void const *src, size_t n);
void	*ft_memmove(void *dest, void const *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlen(char const *str);
//size_t	ft_strlcpy(char *dest, char const *src, size_t size);
//size_t	ft_strlcat(char *dest, char const *src, size_t size);
int		ft_lstsize(t_list *lst);
int		ft_atoi(char const *str);
int		ft_memcmp(void const *s1, void const *s2, size_t n);
int		ft_strncmp(char const *s1, char const *s2, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
//void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_bzero(void *s, size_t n);
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstadd_back(t_list **alst, t_list *new);
//void	ft_lstdelone(t_list *lst, void (*del)(void *));
//void	ft_lstiter(t_list *lst, void (*f)(void *));

#endif