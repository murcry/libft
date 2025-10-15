/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:54:28 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/15 22:53:05 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The strlcat() function concatenate strings with the same input parameters and
 * outuput result as snprintf(). It is designed to be safer, more consistent, and
 * less error prone replacements for the easily misused function strncat().
 * strlcat() take the full size of the destination buffer and guarantee
 * NUL-termination if there is room. Note that room for the NUL should be
 * included in dstsize. Also note that strlcat() only operate on true ''C''
 * strings. This means that both src and dst must be NUL-terminated.
 * strlcat() appends string src to the end of dst. It will append at most
 * dstsize - strlen(dst) - 1 characters. It will then NUL-terminate, unless
 * dstsize is 0 or the original dst string was longer than dstsize (in practice
 * this should not happen as it means that either dstsize is incorrect or that
 * dst is not a proper string).
 *  If the src and dst strings overlap, the behavior is undefinded.
 * Like snprintf(), strlcat() function return the total length of the string it
 * tried to create. That means the initial length of dst plus the length of src.
 * If the return value is >= dstsize, the output string has been truncated.
 * It is the caller's responsibility to handle this.
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
