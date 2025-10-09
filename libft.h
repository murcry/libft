/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:45:44 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/09 13:10:42 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

#include <stdio.h>
#include <limits.h>

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

size_t  ft_strlcpy(char *dest, const char *src, size_t size);	//TODO

size_t	ft_strlcat(char *dst, const char *src, size_t size);	//TODO

int		ft_toupper(int c);										//TODO

int		ft_tolower(int c);										//TODO

/*he strchr() function returns a pointer to the first occurrence of the 
	character c in the string s.*/

char 	*ft_strchr(const char *s, int c);						//TODO

/*The strrchr() function returns a pointer to the last occurrence of the
	character c in the string s.*/

char	*ft_strrchr(const char *s, int c);						//TODO

int     ft_atoi(const char *nptr);

char    *ft_itoa(int n);										//TODO

#endif