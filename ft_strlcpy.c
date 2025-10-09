/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:40:31 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/09 17:19:18 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO
/* The strlcpy() and strlcat() functions copy and concatenate strings re‐
    spectively.  They are designed to be safer, more consistent, and less er‐
    ror prone replacements for strncpy(3) and strncat(3).  Unlike those func‐
    tions, strlcpy() and strlcat() take the full size of the buffer (not just
    the length) and guarantee to NUL-terminate the result (as long as size is
    larger than 0 or, in the case of strlcat(), as long as there is at least
    one byte free in dst).  Note that a byte for the NUL should be included
    in size.  Also note that strlcpy() and strlcat() only operate on true “C”
    strings.  This means that for strlcpy() src must be NUL-terminated and
    for strlcat() both src and dst must be NUL-terminated.

    The strlcpy() function copies up to size - 1 characters from the NUL-ter‐
    minated string src to dst, NUL-terminating the result.

    The strlcat() function appends the NUL-terminated string src to the end
    of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
    nating the result.
*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	
	i = 0;
	while(i < size)
	{
        
	}
	return (ft_strlen(src));
}