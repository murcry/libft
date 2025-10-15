/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:09:44 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/15 21:10:35 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The isalnum() function tests for any character for which isalpha() or
 * isdigit() is true. The value of the argument must be representable as an
 * unsigned char or the value of EOF.
 */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = '%';
	b = ft_isalnum(a);
	printf("%d", b);
	return (0);
}*/
