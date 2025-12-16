/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:23:09 by digonza2          #+#    #+#             */
/*   Updated: 2025/12/16 12:05:57 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Calculates the number of digits in the long integer 'n'.
 * 
 * The minus sign is included in the count for negative numbers.
 * @param n The long integer to measure.
 * @return The total count of digits (including the sign if negative).
 */
static size_t	num_size(long n)
{
	size_t	size;

	size = 1;
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n >= 10)
	{
		n /= 10;
		size++;
	}
	return (size);
}

/**
 * @brief Allocates (with malloc(3)) and returns a string representing the 
 * integer received as an argument. Negative numbers must be handled.
 * @param n The integer to convert.
 * @return The string representing the integer. NULL if the allocation fails.
 */
char	*ft_itoa(int n)
{
	char	*num;
	int		size;
	int		is_negative;
	long	number;

	number = n;
	size = num_size(number);
	num = malloc(size + 1);
	if (!num)
		return (NULL);
	is_negative = 0;
	if (n < 0)
	{
		number *= -1;
		num[0] = '-';
		is_negative = 1;
	}
	num[size--] = '\0';
	while (((size >= 0) && (is_negative == 0)) || ((size > 0)
			&& (is_negative == 1)))
	{
		num[size--] = number % 10 + '0';
		number /= 10;
	}
	return (num);
}
