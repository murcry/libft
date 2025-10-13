/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:45:44 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/13 18:33:08 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

// #include <stdio.h>
// #include <limits.h>

/*
 * The isalpha() function tests for any character for which isupper() or
 * islower() is true. The value of the argument must be resprensentable as an
 * unsigned char or the value of EOF.
 * The isalpha() function return zero if the character tests false and returns
 * non-zero if the character tests true.
 */

int		ft_isalpha(int c);

/* The isdigit() function tests for a decimal digit character. The value of the
 * argument must be representable as an unsigned char or the value of EOF.
 * The isdigit() function return zero if the character tests false and return
 * non-zero if the character tests true.
 */

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

/*
 * The strlcpy() function copies up to size - 1 characters from the NUL-
 * terminated string src to dst, NUL-terminating the result.  
 */

size_t	ft_strlcpy(char *dest, const char *src, size_t size);			//TODO

/*
 * The strlcat() function appends the NUL-terminated string src to the end
 * of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-
 * terminating the result.
  */

size_t	ft_strlcat(char *dst, const char *src, size_t size);			//TODO

/*
 * If  c is a lowercase letter, toupper() returns its uppercase equivalent, 
 * if an uppercase representation exists in the current locale.  Otherwise,
 * it returns c.
 */

int		ft_toupper(int c);

/*
 * If  c is an uppercase letter, tolower() returns its lowercase equivalent,
 * if a lowercase representation exists in the current locale.  Otherwise,
 * it returns c
 */

int		ft_tolower(int c);

/*
 * The strchr() function returns a pointer to the first occurrence of the 
 * character c in the string s
 */

char	*ft_strchr(const char *s, int c);								//TODO

/*
 * The strrchr() function returns a pointer to the last occurrence of the
 * character c in the string s
 * */

char	*ft_strrchr(const char *s, int c);								//TODO

/*
 * The  strcmp()  function compares the two strings s1 and s2. The  strcmp()
 * function compares the two strings s1 and s2. The strcmp() and strncmp()
 * functions return an integer less than, equal to, or greater than zero if s1
 * (or the first n bytes thereof) is found, respectively, to be less than, to
 * match, or be greater than s2.
*/

int		ft_strncmp(const char *s1, const char *s2, size_t n);			//TODO

/*
 * The memchr() function scans the initial n bytes of the memory area pointed
 * to by s for the first instance of c. Both c and the bytes of the memory
 * area pointed to by s are interpreted as unsigned char. The  memchr() and
 * memrchr() functions return a pointer to the matching byte or NULL if the
 * character does not occur in the given memory area.
 */

void	*ft_memchr(const void *s, int c, size_t n);						//TODO

/*
 * The  memcmp()  function  compares the first n bytes (each interpreted as
 * unsigned char) of the memory areas s1 and s2. The memcmp() function returns
 * an integer less than, equal to, or greater than zero if  the first  n bytes
 * of s1 is found, respectively, to be less than, to match, or be greater than
 * the first n bytes of s2.
 * For a nonzero return value, the sign is determined by the sign of the
 * difference  between the first pair of bytes (interpreted as unsigned char)
 * that differ in s1 and s2.
 * If n is zero, the return value is zero.
 */

int		ft_memcmp(const void *s1, const void *s2, size_t n);			//TODO

char	*ft_strnstr(const char *big, const char *little, size_t len);	//TODO

int		ft_atoi(const char *nptr);

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

void	*ft_calloc(size_t nmemb, size_t size);							//TODO

/*
 * The strdup() function returns a pointer to a new string which is a duplicate
 * of the string s. Memory for the new string is obtained with malloc(), and
 * can be freed with free().
 * On  success, the strdup() function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available, with errno set to
 * indicate the cause of the error.
 */

char	*ft_strdup(const char *s);										//TODO

/*
 * Allocate (with malloc()) and returns a string representing n. Negative numbers
 * must be handled.
 * Returns the string representing n; NULL if the memory allocation failed.
 */

char	*ft_itoa(int n);

#endif