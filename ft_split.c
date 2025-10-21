/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:15:02 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/21 15:02:51 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

/*
 * Counts the number of words in a string, separated by a delimiter.
 * s: The string to be searched.
 * c: The delimiter character.
 * Returns the total number of words found in 's'.
 */

static unsigned int	count_elements(char const *s, char c)
{
	size_t	i;
	int		count;

	if (s == NULL)
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

/*
 * Extracts a substring from a source string.
 * This function cuts a portion of the string 's' starting from the 'start'
 * index up to the 'end' index. It allocates new memory for the substring
 * and returns it.
 * start: The starting index of the substring in 's'.
 * end: The ending index of the substring in 's'.
 * s: The source string from which to extract the word.
 * Returns a pointer to the newly created substring, or NULL if the memory
 * allocation fails.
 */

static char	*ft_scissors(size_t start, size_t end, const char *s)
{
	size_t	s_len;
	size_t	i;
	char	*word;

	if (start > end)
		return (NULL);
	s_len = end - start + 1;
	word = malloc(s_len + 1);
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

/*
 * Frees all the memory allocated for an array of strings.
 * This function is used as a cleanup helper in case of a memory
 * allocation failure during the split process.
 * list: The array of strings to be freed.
 * elements_num: The number of elements that were successfully allocated
 * in the list before the failure.
 * Returns NULL.
 */

static char	**ft_free_all(char **list, size_t elements_num)
{
	while (elements_num > 0)
		free(list[--elements_num]);
	free(list);
	return (NULL);
}

/*
 * Fills the list with words from the string 's' using 'c' as a delimiter.
 * Handles memory allocation for each word and cleans up on failure.
 * list: The pre-allocated array of strings to fill.
 * s: The source string to split.
 * c: The delimiter character.
 * Returns the filled list on success, or NULL on failure.
 */

static char	**ft_fill_list(char **list, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			list[j] = ft_scissors(start, i - 1, s);
			if (list[j] == NULL)
				return (ft_free_all(list, j));
			j++;
		}
	}
	list[j] = NULL;
	return (list);
}

/*
 * Allocate (with malloc()) and returns an array of strings obtained by
 * splittings with the character c, used as delimiter.
 * The returned array must be NUL-terminated.
 * s: string to split
 * c: delimiter character
 * ft_split() returns an array of strings resulting from the splitting of s;
 * NULL if the memory allocation failed.
 */

char	**ft_split(char const *s, char c)
{
	size_t	elements_num;
	char	**list;

	if (s == NULL)
		return (NULL);
	elements_num = count_elements(s, c);
	list = malloc((elements_num + 1) * sizeof(char *));
	if (list == NULL)
		return (NULL);
	list = ft_fill_list(list, s, c);
	return (list);
}

// int	main(void)
// {
// 	char			s[30] = "       Hola Mundo   Bonito    ";
// 	unsigned int	word;

// 	word = count_elements(s, ' ');
// 	printf("%d\n", word);
// 	return (0);
// }
