/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:45:53 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/20 13:09:55 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_char_in_str(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	get_start(const char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && is_char_in_str(s1[i], set) == 1)
		i++;
	return (i);
}

static size_t	get_end(const char *s1, const char *set)
{
	int	j;

	j = (int) ft_strlen(s1) - 1;
	while (s1[j] && is_char_in_str(s1[j], set) == 1)
		j--;
	if (j < 0)
		j = 0;
	return (j);
}

/*
 * Allocate (with malloc()) and returns a copy of s1, without the characters
 * specified in set at the beginning and the end of s1.
 * s1: string to trim
 * set: characters to trim
 * ft_strtrim() returns a trimmed copy of s1; NULL if the memory allocation
 * failed.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*new;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = get_start(s1, set);
	end = get_end(s1, set);
	if (s1[0] == '\0' || start > end)
		return (ft_strdup(""));
	if (set[0] == '\0' || (start == 0 && end == ft_strlen(s1) - 1))
		return (ft_strdup(s1));
	new = malloc(end - start + 1 + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < end - start + 1)
	{
		new[i] = s1[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
