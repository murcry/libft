/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:45:53 by digonza2          #+#    #+#             */
/*   Updated: 2025/12/16 12:05:06 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the character 'c' is present in the string 'set'.
 *
 * @param c The character to search for.
 * @param set The set of reference characters.
 * @return 1 if 'c' is found in 'set', 0 otherwise.
 */
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

/**
 * @brief Calculates the starting index of the string after trimming
 * leading characters found in 'set'.
 *
 * @param s1 The string to be trimmed.
 * @param set The set of characters to be removed.
 * @return The index of the first character in 's1' that is not in 'set'.
 */
static size_t	get_start(const char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && is_char_in_str(s1[i], set) == 1)
		i++;
	return (i);
}

/**
 * @brief Calculates the ending index of the string after trimming
 * trailing characters found in 'set'.
 *
 * @param s1 The string to be trimmed.
 * @param set The set of characters to be removed.
 * @return The index of the last character in 's1' that is not in 'set'.
 */
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

/**
 * @brief Allocates (with malloc(3)) and returns a copy of 's1' with the 
 * characters specified in 'set' removed from the beginning and the end of the 
 * string.
 * @param s1 The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @return The trimmed string. NULL if the allocation fails.
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
