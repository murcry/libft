/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:45:44 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/21 15:01:42 by digonza2         ###   ########.fr       */
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

/* 
 * The isdigit() function tests for a decimal digit character. The value of the
 * argument must be representable as an unsigned char or the value of EOF.
 * The isdigit() function return zero if the character tests false and return
 * non-zero if the character tests true.
 */

int		ft_isdigit(int c);

/*
 * The isalnum() function tests for any character for which isalpha() or
 * isdigit() is true. The value of the argument must be representable as an
 * unsigned char or the value of EOF.
 */

int		ft_isalnum(int c);

/*
 * The isascii() function tests for an ASCII character, which is any character
 * between 0 and octal 0177 inclusive.
 */

int		ft_isascii(int c);

/*
 * The isprint() function tests for any printing character, including space.
 * The value of the argument must representable as an unsigned char or the value
 * of EOF. The isprint() function returns zero if the character tests false and
 * returns non-zero if the character tests true.
 */

int		ft_isprint(int c);

/*
 * The strlen() function computes the length of the string s. The strlen()
 * function returns the number of characters that precede the terminating NUL
 * character.
 */

size_t	ft_strlen(const char *s);

/*
 * The memset() function writes len bytes of value c (converted to an unsigned
 * char) to the string b. The memset() function returns its first argument.
 */

void	*ft_memset(void *s, int c, size_t n);

/*
 * The bzero() function writes n zeroed bytes to the string s. If n is zero,
 * bzero() does nothing.
 */

void	ft_bzero(void *s, size_t n);

/*
 * The memcpy() function copies n bytes from memory area src to memory area dest.
 * If dest and src overlap, behavior is undefined. Applications in which dest and
 * src might overlap should use memove() instead. The memcpy() function returns
 * the original value of dest.
 */

void	*ft_memcpy(void *dest, const void *src, size_t n);

/*
 * The memmove() function copies n bytes from string src to string dest.
 * The two strings may overlap; the copy is always done in a non-destructive
 *  manner. The memmove() function returns the original value of dest.
 */

void	*ft_memmove(void *dest, const void *src, size_t n);

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

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);

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

size_t	ft_strlcat(char *dst, const char *src, size_t size);

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

char	*ft_strchr(const char *s, int c);

/*
 * The strrchr() function returns a pointer to the last occurrence of the
 * character c in the string s
 */

char	*ft_strrchr(const char *s, int c);

/*
 * The  strcmp()  function compares the two strings s1 and s2. The  strcmp()
 * function compares the two strings s1 and s2. The strcmp() and strncmp()
 * functions return an integer less than, equal to, or greater than zero if s1
 * (or the first n bytes thereof) is found, respectively, to be less than, to
 * match, or be greater than s2.
*/

int		ft_strncmp(const char *s1, const char *s2, size_t n);

/*
 * The memchr() function scans the initial n bytes of the memory area pointed
 * to by s for the first instance of c. Both c and the bytes of the memory
 * area pointed to by s are interpreted as unsigned char. The  memchr() and
 * memrchr() functions return a pointer to the matching byte or NULL if the
 * character does not occur in the given memory area.
 */

void	*ft_memchr(const void *s, int c, size_t n);

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

int		ft_memcmp(const void *s1, const void *s2, size_t n);

/*
 * The strnstr() function locates the first occurence of the null-terminated
 * string little in the string big, where not more than len characters are
 * searched.
 * Characters that appear after a '\0' character are not searched.
 * If little is an empty string, big is returned; if little occurs nowhere in
 * big, NULL is returned; otherwise a pointer to the first character of the
 * first occurence of little is returned.
 */

char	*ft_strnstr(const char *big, const char *little, size_t len);

/*
 * The atoi() function converts the initial portion of the string pointed to by
 * str to int representation. Convert ASCII string to integer
 */

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

void	*ft_calloc(size_t nmemb, size_t size);

/*
 * The strdup() function returns a pointer to a new string which is a duplicate
 * of the string s. Memory for the new string is obtained with malloc(), and
 * can be freed with free().
 * On  success, the strdup() function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available, with errno set to
 * indicate the cause of the error.
 */

char	*ft_strdup(const char *s);	//TODO

/*
 * Allocate (with malloc()) and return a new string from the string s.
 * This new string starts at index 'start' and has a maximum size of 'len'.
 * s: string from which to extract the new string
 * start: start index of the new string in the string 's'
 * len: maximum size of the new string
 * ft_substr() returns the new string; NULL if the memory allocation failed.
 */

char	*ft_substr(char const *s, unsigned int start, size_t len);

/*
 * Allocate (with malloc()) and returns a new string resulting from the
 * concatenation of s1 and s2.
 * s1: prefix string
 * s2: suffix string
 * ft_strjoin() returns the new string; NULL if the memory allocation failed.
 */

char	*ft_strjoin(char const *s1, char const *s2);

/*
 * Allocate (with malloc()) and returns a copy of s1, without the characters
 * specified in set at the beginning and the end of s1.
 * s1: string to trim
 * set: characters to trim
 * ft_strtrim() returns a trimmed copy of s1; NULL if the memory allocation
 * failed.
 */

char	*ft_strtrim(char const *s1, char const *set);

/*
 * Allocate (with malloc()) and returns an array of strings obtained by
 * splittings with the character c, used as delimiter.
 * The returned array must be NUL-terminated.
 * s: string to split
 * c: delimiter character
 * ft_split() returns an array of strings resulting from the splitting of s;
 * NULL if the memory allocation failed.
 */

char	**ft_split(char const *s, char c);

/*
 * Allocate (with malloc()) and returns a string representing n. Negative
 * numbers must be handled.
 * Returns the string representing n; NULL if the memory allocation failed.
 */

char	*ft_itoa(int n);

/*
 * This function iterates through the string 's', applying 'f' to each
 * character and its index, and stores the results in a newly allocated string.
 * s: The string to iterate over.
 * f: The function to apply to each character.
 * Returns a pointer to the new string created from the successive applications
 * of 'f', or NULL if the memory allocation fails.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif