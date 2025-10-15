/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:07:05 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/15 22:30:57 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The isdigit() function tests for a decimal digit character. The value of the
 * argument must be representable as an unsigned char or the value of EOF.
 * The isdigit() function return zero if the character tests false and return
 * non-zero if the character tests true.
 */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	c;
	int	d;

	c = 'A';
	d = ft_isdigit(c);
	printf("%d", d);
	return (0);
}*/
