/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:05:41 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/17 19:38:29 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Join the two strings s1 and s2 into joined
 */

static void	ft_join(char *joined, char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		joined[i + j] = s2[j];
		j++;
	}
	joined[i + j] = '\0';
}

/*
 * Allocate (with malloc()) and returns a new string resulting from the
 * concatenation of s1 and s2.
 * s1: prefix string
 * s2: suffix string
 * ft_strjoin() returns the new string; NULL if the memory allocation failed.
 */

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	joined_len;
	char	*joined;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined_len = s1_len + s2_len;
	joined = malloc(joined_len + 1);
	if (joined == NULL)
		return (NULL);
	ft_join(joined, s1, s2);
	return (joined);
}
