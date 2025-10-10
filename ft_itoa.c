/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:23:09 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/10 13:05:32 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	num_size(int n)
{
	size_t	size;

	size = 1;
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n > 10)
	{
		n /= 10;
		size++;
	}
	return (size);
}

int	ft_check_int_min(int n)
{
	if (n == INT_MIN)
		return (1);
	else
		return (0);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		size;
	int		is_negative;
	int		is_min_int;

	size = num_size(n);
	num = malloc(size + 1);
	is_negative = 0;
	is_min_int = ft_check_int_min(n);
	if (n < 0)
	{
		n *= -1;
		num[0] = '-';
		is_negative = 1;
	}
	num[size] = '\0';
	size--;
	while (((size >= 0) && (is_negative == 0)) || ((size > 0)
			&& (is_negative == 1)))
	{
		num[size] = n % 10 + '0';
		n /= 10;
		size--;
	}
	return (num);
}
/*
int	main(void)
{
	int		number;
	//int     size;
	char	*numero;

	number = INT_MIN;
    numero = ft_itoa(number);
    //size = ft_strlen(numero);
    printf("%s", numero);
    //printf("\n%d", size);
    return (0);
}*/
