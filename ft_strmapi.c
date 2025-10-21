/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:02:03 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/21 15:12:10 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * This function iterates through the string 's', applying 'f' to each
 * character and its index, and stores the results in a newly allocated string.
 * s: The string to iterate over.
 * f: The function to apply to each character.
 * Returns a pointer to the new string created from the successive applications
 * of 'f', or NULL if the memory allocation fails.
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
