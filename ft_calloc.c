/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:03:21 by digonza2          #+#    #+#             */
/*   Updated: 2025/12/16 12:03:47 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates memory for an array of nmemb elements of size bytes each.
 * The memory is set to zero.
 *
 * @param nmemb The number of elements.
 * @param size The size of each element.
 * @return A pointer to the allocated memory, or NULL if the request fails.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	fullsize;
	void	*block;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > __SIZE_MAX__ / size)
		return (NULL);
	fullsize = nmemb * size;
	block = malloc(fullsize);
	if (block == NULL)
		return (NULL);
	ft_bzero(block, fullsize);
	return (block);
}
