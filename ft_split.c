/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:15:02 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/21 01:49:25 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

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

static void	ft_free_all(char **list, size_t elements_num)
{
	while (elements_num > 0)
		free(list[--elements_num]);
	free(list);
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
}

// int	main(void)
// {
// 	char			s[30] = "       Hola Mundo   Bonito    ";
// 	unsigned int	word;

// 	word = count_elements(s, ' ');
// 	printf("%d\n", word);
// 	return (0);
// }
