/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:03:25 by digonza2          #+#    #+#             */
/*   Updated: 2025/12/16 12:01:11 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts an upper-case letter to the corresponding lower-case letter.
 *
 * @param c The character to convert.
 * @return The converted letter, or c if the conversion was not possible.
 */
int	ft_tolower(int c)
{
	int	change;

	change = 'a' - 'A';
	if (c >= 'A' && c <= 'Z')
		c += change;
	return (c);
}
