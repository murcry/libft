/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 16:46:30 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/15 21:06:58 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Returns the position of the first element in an array that is not a blank or
 * space character.
 */

static int	is_space(const char *nptr)
{
	int	position;

	position = 0;
	while (nptr[position] == ' ' || (nptr[position] >= 9
			&& nptr[position] <= 13))
		position++;
	return (position);
}

/*
 * It returns 0 if the number is positive and 1 if the number is positive with
 * '+' and 2 if the number is negative.
 */

static int	sign(const char *nptr, int position)
{
	int	sign;

	if (nptr[position] == '-')
		sign = 2;
	else if (nptr[position] == '+')
		sign = 1;
	else
		sign = 0;
	return (sign);
}

/*
 * The atoi() function converts the initial portion of the string pointed to by
 * str to int representation. Convert ASCII string to integer
 */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	sg;

	i = is_space(nptr);
	sg = sign(nptr, i);
	num = 0;
	if (sg == 1 || sg == 2)
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num + nptr[i] - '0';
		if (nptr[i + 1] >= '0' && nptr[i + 1] <= '9')
			num *= 10;
		i++;
	}
	if (sg == 2)
		num *= -1;
	return (num);
}

/* int	main(void)
{
	int		num;
	char	number[] = "     -5694";

	num = ft_atoi(number);
	printf("%d", num);
	return (0);
} */
