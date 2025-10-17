/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 23:09:23 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/17 11:54:20 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The strnstr() function locates the first occurence of the null-terminated
 * string little in the string big, where not more than len characters are
 * searched.
 * Characters that appear after a '\0' character are not searched.
 * If little is an empty string, big is returned; if little occurs nowhere in
 * big, NULL is returned; otherwise a pointer to the first character of the
 * first occurence of little is returned.
 */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	i = 0;
	j = 0;
	little_len = ft_strlen(little);
	if (*little == '\0')
		return ((char *)big);
	if (*big == '\0' || len == 0)
		return (NULL);
	while (i + little_len <= len && big[i] != '\0')
	{
		while (big[i + j] == little[j] && little[j] && i + j < len)
		{
			j++;
		}
		if (j == little_len)
			return ((char *)&(big[i]));
		j = 0;
		i++;
	}
	return (NULL);
}
