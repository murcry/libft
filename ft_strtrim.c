/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:45:53 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/17 20:56:03 by digonza2         ###   ########.fr       */
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
 * It returns the total size of the new string to be createdfor the function
 * ft_strtrim().
 */

static size_t	get_size(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	size_t			new_len;

	i = 0;
	j = 0;
	while (set[j])
	{
		while (s1[i])
		{
			if (s1[i] == set[j])
				new_len++;
			i++;
		}
		i = 0;
		j++;
	}
	return (new_len);
}

static void	create_trim(char const *s1, char const *set, char *new)
{
	int	i;
	int	j;
	int	equals;
	int	z;

	i = 0;
	j = 0;
	z = 0;
	equals = 0;
	while (s1[i])
	{
		while (set[j] && equals == 0)
		{
			if (s1[i] == set[j])
				equals = 1;
			j++;
		}
		j = 0;
		if (equals == 0)
			new[z++] = s1[i];
		i++;
	}
	new[z] = '\0';
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
	size_t	new_len;
	char	*new;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (s1[0] == '\0' || set[0] == '\0')
		return (create_empty_str());
	new_len = get_size(s1, set);
	if (new_len == ft_strlen(s1) || new_len == 0)
		return (create_empty_str());
	new = malloc(new_len + 1);
	if (new == NULL)
		return (NULL);
	create_trim(s1, set, new);
	return (new);
}
