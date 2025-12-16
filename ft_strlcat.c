/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:54:28 by digonza2          #+#    #+#             */
/*   Updated: 2025/12/16 12:00:16 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Size-bounded string concatenation.
 * 
 * Appends string src to the end of dst. It will append at most 
 * dstsize - strlen(dst) - 1 characters. It will then NUL-terminate, unless 
 * dstsize is 0 or the original dst string was longer than dstsize.
 * @param dst The destination string.
 * @param src The string to be appended.
 * @param size The full size of the destination buffer.
 * @return The total length of the string it tried to create (initial length of 
 * dst + length of src).
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	int		i;

	if (dstsize == 0)
		return (ft_strlen(src));
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	i = 0;
	while ((dstlen + i) < (dstsize - 1) && src[i] && dstsize != 0)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
