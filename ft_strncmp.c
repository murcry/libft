/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:54:31 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/15 22:54:55 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The  strcmp()  function compares the two strings s1 and s2. The  strcmp()
 * function compares the two strings s1 and s2. The strcmp() and strncmp()
 * functions return an integer less than, equal to, or greater than zero if s1
 * (or the first n bytes thereof) is found, respectively, to be less than, to
 * match, or be greater than s2.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && i < n - 1 && (s1[i] || s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
