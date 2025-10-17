/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:00:30 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/17 15:08:05 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The strdup() function returns a pointer to a new string which is a duplicate
 * of the string s. Memory for the new string is obtained with malloc(), and
 * can be freed with free().
 * On  success, the strdup() function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available, with errno set to
 * indicate the cause of the error.
 */

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	size_s;
	int		i;

	i = 0;
	size_s = ft_strlen(s);
	copy = malloc(size_s + 1);
	if (copy == NULL)
		return (NULL);
	while (i < (int)(size_s))
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
