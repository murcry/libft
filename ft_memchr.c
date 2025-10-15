/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:09:42 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/15 20:55:48 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The memchr() function scans the initial n bytes of the memory area pointed
 * to by s for the first instance of c. Both c and the bytes of the memory
 * area pointed to by s are interpreted as unsigned char. The  memchr() and
 * memrchr() functions return a pointer to the matching byte or NULL if the
 * character does not occur in the given memory area.
 */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	car;
	size_t			i;

	i = 0;
	car = c;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == car)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
