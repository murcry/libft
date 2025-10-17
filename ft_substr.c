/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:54:53 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/17 16:59:12 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * This auxiliar function creates an empty string and returns this empty string
 */

static char	*create_empty_str(void)
{
	char	*empty;

	empty = malloc(1 * sizeof(char));
	if (empty == NULL)
		return (NULL);
	empty[0] = '\0';
	return (empty);
}

/*
 * Allocate (with malloc()) and return a new string from the string s.
 * This new string starts at index 'start' and has a maximum size of 'len'.
 * s: string from which to extract the new string
 * start: start index of the new string in the string 's'
 * len: maximum size of the new string
 * ft_substr() returns the new string; NULL if the memory allocation failed.
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	sub_len;
	char	*sub_s;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (create_empty_str());
	if (s_len - start < len)
		sub_len = s_len - (size_t)start;
	else
		sub_len = len;
	sub_s = malloc(sub_len + 1);
	if (sub_s == NULL)
		return (NULL);
	while (i < sub_len)
	{
		sub_s[i] = s[start + i];
		i++;
	}
	sub_s[i] = '\0';
	return (sub_s);
}
