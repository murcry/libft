/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:09:42 by digonza2          #+#    #+#             */
/*   Updated: 2025/12/16 12:02:43 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Scans the initial n bytes of the memory area pointed to by s for the 
 * first instance of c.
 *
 * @param s The memory area to scan.
 * @param c The character to search for.
 * @param n The number of bytes to scan.
 * @return A pointer to the matching byte or NULL if the character does not 
 * occur in the given memory area.
 */
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
