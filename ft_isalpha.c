/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:00:26 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/15 22:30:25 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The isalpha() function tests for any character for which isupper() or
 * islower() is true. The value of the argument must be resprensentable as an
 * unsigned char or the value of EOF.
 * The isalpha() function return zero if the character tests false and returns
 * non-zero if the character tests true.
 */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	c;
	int	d;

	c = '?';
	d = ft_isalpha(c);
	printf("%d", d);
	return (0);
}*/
