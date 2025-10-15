/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:23:09 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/15 22:59:58 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Returns de number of digits the long int n has. It's also count the minus sign
 * for negative numbers.
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

/*
 * Allocate (with malloc()) and returns a string representing n. Negative numbers
 * must be handled.
 * Returns the string representing n; NULL if the memory allocation failed.
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

/* int	main(void)
{
	int		number;
	//int     size;
	char	*numero;

	number = 10;
    numero = ft_itoa(number);
    //size = ft_strlen(numero);
    printf("%s", numero);
    //printf("\n%d", size);
    return (0);
} */
