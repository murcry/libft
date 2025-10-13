/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 18:19:18 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/13 16:53:54 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src < dest)
	{
		while (n > 0)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
		return (dest);
	}
	else
		dest = ft_memcpy(dest, src, n);
	return (dest);
}
/*
int	main(void)
{
	char	c1[] = "Hola Juan";
	char	c2[] = "AdiosPaco";

	ft_memmove(c2, c1, 6);
	printf("%s", c2);
	return (0);
}*/
