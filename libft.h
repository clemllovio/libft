/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:14:25 by cllovio           #+#    #+#             */
/*   Updated: 2022/11/12 13:20:23 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

void			ft_bzero(void *s, unsigned int n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, \
size_t n);
void			*ft_memmove(void *dest, const void *src, size_t len);
void			*ft_memset(void *b, int c, unsigned int len);
char			*ft_strchr(const char *s, int c);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int destsize);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int destsize);
unsigned int	ft_strlen(const char *s);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
char			*ft_strnstr(const char *haystack, const char *needle, \
unsigned int len);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strrchr(const char *s, int c);

#endif