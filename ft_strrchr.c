/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:03:40 by digonza2          #+#    #+#             */
/*   Updated: 2025/12/16 12:01:58 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the last occurrence of character c in string s.
 *
 * @param s The string to search.
 * @param c The character to locate.
 * @return A pointer to the last occurrence of the character c in the string s, 
 * or NULL if the character is not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	car;

	car = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == car)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
