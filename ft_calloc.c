/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:03:21 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/17 12:50:57 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The calloc() function allocates memory for an array of nmemb elements of size
 * bytes  each and returns a pointer to the allocated memory. The memory is set
 * to zero. If nmemb or size is 0, then calloc() returns either NULL, or a unique
 * pointer value that can later be successfully  passed  to  free().If the
 * multiplication of nmemb and size would result in integer overflow, then
 * calloc() returns an error. By contrast, an integer overflow  would not be
 * detected in the following call to malloc(), with the result that
 * an incorrectly sized block of memory would be allocated:
 * 	malloc(nmemb * size);
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
