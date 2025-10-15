/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:27:01 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/15 22:56:01 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The  memcmp()  function  compares the first n bytes (each interpreted as
 * unsigned char) of the memory areas s1 and s2. The memcmp() function returns
 * an integer less than, equal to, or greater than zero if  the first  n bytes
 * of s1 is found, respectively, to be less than, to match, or be greater than
 * the first n bytes of s2.
 * For a nonzero return value, the sign is determined by the sign of the
 * difference  between the first pair of bytes (interpreted as unsigned char)
 * that differ in s1 and s2.
 * If n is zero, the return value is zero.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
