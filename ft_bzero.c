/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:18:51 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/15 21:08:27 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The bzero() function writes n zeroed bytes to the string s. If n is zero,
 * bzero() does nothing.
 */

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
int	main(void)
{
	char	c[] = "hola";

	ft_bzero(c, sizeof(c));
	printf("%s", c);
	return (0);
}*/
