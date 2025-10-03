/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:50:18 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/03 13:06:42 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	while (i++ < n)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	return (dest);
}

int	main(void)
{
	char	c1[] = "Hola Juan";
	char	c2[] = "AdiosPaco";

	ft_memcpy(c2, c1, 6);
	printf("%s", c2);
	return (0);
}
