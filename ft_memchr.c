/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:09:42 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/15 14:28:54 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
