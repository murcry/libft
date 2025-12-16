/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 16:46:30 by digonza2          #+#    #+#             */
/*   Updated: 2025/12/16 12:03:36 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the position of the first element in an array that is not a 
 * blank or space character.
 * @param nptr The string (or array) to be scanned.
 * @return The index (position) of the first non-space character.
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

/**
 * @brief Determines the sign of the number based on the character at 'position'.
 *
 * @param nptr The string containing the number representation.
 * @param position The index in 'nptr' where the sign or number begins.
 * @return 0 if the number is positive (no sign), 1 if it is positive with 
 * a '+', and 2 if it is negative.
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

/**
 * @brief Converts the initial portion of the string pointed to by nptr to int 
 * representation.
 *
 * @param nptr The string to convert.
 * @return The converted integer value.
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
