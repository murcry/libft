/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:40:31 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/15 22:48:13 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The strlcpy() function copy strings with the same input parameters and output
 * result as snprintf(). It is designed to be safer, more consistent, and less
 * error prone replacement for the easily misused function strncpy() strlcpy()
 * take the full size of the destination buffer and guarantee NUL-termination if
 * there is room. Note that room for the NUL should be included in dstsize. Also
 * note that strlcpy() only operate on true ''C'' strings. This means that for
 * strlcpy() src must be NUL-terminated. strlcpy() copies up to dstsize - 1
 * characters from the string src to dst, NUL-terminating the result if dstsize
 * is not 0. If the src and dst strings overlap, the behavior is undefined.
 * The strlcpy() function return the total length of the strings it tried to
 * create. That means the length of src. If the return value is >= dstsize, the
 * output string has been truncated. It is the caller's responsibility to handle
 * this.
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_size;

	src_size = ft_strlen(src);
	if (src_size + 1 < dstsize)
		ft_memcpy(dst, src, src_size + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (src_size);
}

/* int	main(void)
{
	char	*ch1 = "ABCDEFGHIJK";
	char	ch2[15];
	size_t	src_len;
	int		i;

	i = 0;
	src_len = ft_strlcpy(ch2, ch1, 15);
	printf("%s", ch2);
	return (0);
} */
