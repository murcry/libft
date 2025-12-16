/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:02:03 by digonza2          #+#    #+#             */
/*   Updated: 2025/12/16 12:06:23 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies the function 'f' to each character of the string 's', and 
 * passing its index as first argument to create a new string (with malloc(3)) 
 * resulting from successive applications of 'f'.
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return The string created from the successive applications of 'f'. 
 * Returns NULL if the allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*chain;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	chain = malloc(ft_strlen(s) + 1);
	if (chain == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		chain[i] = f((unsigned int)i, s[i]);
		i++;
	}
	chain[i] = '\0';
	return (chain);
}
