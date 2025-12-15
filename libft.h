/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:45:44 by digonza2          #+#    #+#             */
/*   Updated: 2025/12/15 19:52:25 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

// #include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**
 * @brief Tests for any character for which isupper(3) or islower(3) is true.
 *
 * @param c The character to test.
 * @return Non-zero if the character is an alphabetic character, zero otherwise.
 */
int		ft_isalpha(int c);

/**
 * @brief Tests for a decimal digit character.
 *
 * @param c The character to test.
 * @return Non-zero if the character is a digit, zero otherwise.
 */
int		ft_isdigit(int c);

/**
 * @brief Tests for any character for which isalpha(3) or isdigit(3) is true.
 *
 * @param c The character to test.
 * @return Non-zero if the character is alphanumeric, zero otherwise.
 */
int		ft_isalnum(int c);

/**
 * @brief Tests for an ASCII character, which is any character between 0 and 
 * octal 0177 inclusive.
 *
 * @param c The character to test.
 * @return Non-zero if the character is a 7-bit US-ASCII character code, 
 * zero otherwise.
 */
int		ft_isascii(int c);

/**
 * @brief Tests for any printing character, including space.
 *
 * @param c The character to test.
 * @return Non-zero if the character is printable, zero otherwise.
 */
int		ft_isprint(int c);

/**
 * @brief Computes the length of the string s.
 *
 * @param s The string to measure.
 * @return The number of characters that precede the terminating NUL character.
 */
size_t	ft_strlen(const char *s);

/**
 * @brief Writes len bytes of value c (converted to an unsigned char) to the 
 * string b.
 *
 * @param s The pointer to the memory area.
 * @param c The value to be set.
 * @param n The number of bytes to be set.
 * @return A pointer to the memory area s.
 */
void	*ft_memset(void *s, int c, size_t n);

/**
 * @brief Writes n zeroed bytes to the string s. If n is zero, bzero() does 
 * nothing.
 *
 * @param s The pointer to the memory area.
 * @param n The number of bytes to zero.
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief Copies n bytes from memory area src to memory area dest.
 * 
 * The memory areas must not overlap. Use ft_memmove() if the memory areas do 
 * overlap.
 * @param dest The pointer to the destination memory area.
 * @param src The pointer to the source memory area.
 * @param n The number of bytes to copy.
 * @return A pointer to dest.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief Copies n bytes from string src to string dest.
 * 
 * The two strings may overlap; the copy is always done in a non-destructive
 * manner.
 * @param dest The pointer to the destination memory area.
 * @param src The pointer to the source memory area.
 * @param n The number of bytes to copy.
 * @return A pointer to dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief Size-bounded string copying.
 * 
 * Copies up to dstsize - 1 characters from the string src to dst, 
 * NUL-terminating the result if dstsize is not 0.
 * @param dest The destination buffer.
 * @param src The source string.
 * @param dstsize The full size of the destination buffer.
 * @return The total length of the string it tried to create (length of src).
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);

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
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/**
 * @brief Converts a lower-case letter to the corresponding upper-case letter.
 *
 * @param c The character to convert.
 * @return The converted letter, or c if the conversion was not possible.
 */
int		ft_toupper(int c);

/**
 * @brief Converts an upper-case letter to the corresponding lower-case letter.
 *
 * @param c The character to convert.
 * @return The converted letter, or c if the conversion was not possible.
 */
int		ft_tolower(int c);

/**
 * @brief Locates the first occurrence of character c in string s.
 *
 * @param s The string to search.
 * @param c The character to locate.
 * @return A pointer to the first occurrence of the character c in the string s, 
 * or NULL if the character is not found.
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief Locates the last occurrence of character c in string s.
 *
 * @param s The string to search.
 * @param c The character to locate.
 * @return A pointer to the last occurrence of the character c in the string s, 
 * or NULL if the character is not found.
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief Compares not more than n characters of the two strings s1 and s2.
 *
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @param n The maximum number of characters to compare.
 * @return An integer less than, equal to, or greater than zero if s1 is found, 
 * respectively, to be less than, to match, or be greater than s2.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Scans the initial n bytes of the memory area pointed to by s for the 
 * first instance of c.
 *
 * @param s The memory area to scan.
 * @param c The character to search for.
 * @param n The number of bytes to scan.
 * @return A pointer to the matching byte or NULL if the character does not 
 * occur in the given memory area.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Compares the first n bytes of the memory areas s1 and s2.
 *
 * @param s1 The first memory area.
 * @param s2 The second memory area.
 * @param n The number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero if the first n 
 * bytes of s1 is found, respectively, to be less than, to match, or be greater 
 * than the first n bytes of s2.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief Locates the first occurrence of the null-terminated string little in 
 * the string big, where not more than len characters are searched.
 *
 * @param big The string to be searched.
 * @param little The substring to search for.
 * @param len The maximum number of characters to search.
 * @return A pointer to the first character of the first occurrence of little 
 * is returned. NULL if the substring is not found.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/**
 * @brief Converts the initial portion of the string pointed to by nptr to int 
 * representation.
 *
 * @param nptr The string to convert.
 * @return The converted integer value.
 */
int		ft_atoi(const char *nptr);

/**
 * @brief Allocates memory for an array of nmemb elements of size bytes each.
 * The memory is set to zero.
 *
 * @param nmemb The number of elements.
 * @param size The size of each element.
 * @return A pointer to the allocated memory, or NULL if the request fails.
 */
void	*ft_calloc(size_t nmemb, size_t size);

/**
 * @brief returns a pointer to a new string which is a duplicate of the string s.
 * Memory for the new string is obtained with malloc(3).
 *
 * @param s The string to duplicate.
 * @return A pointer to the duplicated string, or NULL if insufficient memory 
 * was available.
 */
char	*ft_strdup(const char *s);

/**
 * @brief Allocates (with malloc(3)) and returns a substring from the string 's'.
 * 
 * The substring begins at index 'start' and is of maximum size 'len'.
 * @param s The string from which to create the substring.
 * @param start The start index of the substring in the string 's'.
 * @param len The maximum length of the substring.
 * @return The substring. NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Allocates (with malloc(3)) and returns a new string resulting from the
 * concatenation of 's1' and 's2'.
 * @param s1 The prefix string.
 * @param s2 The suffix string.
 * @return The new string, or NULL if the memory allocation failed.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Allocates (with malloc(3)) and returns a copy of 's1' with the 
 * characters specified in 'set' removed from the beginning and the end of the 
 * string.
 * @param s1 The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @return The trimmed string. NULL if the allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Allocates (with malloc(3)) and returns an array of strings obtained 
 * by splitting 's' using the character 'c' as a delimiter. The array must end 
 * with a NULL pointer.
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return The array of new strings resulting from the split. NULL if the 
 * allocation fails.
 */
char	**ft_split(char const *s, char c);

/**
 * @brief Allocates (with malloc(3)) and returns a string representing the 
 * integer received as an argument. Negative numbers must be handled.
 * @param n The integer to convert.
 * @return The string representing the integer. NULL if the allocation fails.
 */
char	*ft_itoa(int n);

/**
 * @brief Applies the function 'f' to each character of the string 's', and 
 * passing its index as first argument to create a new string (with malloc(3)) 
 * resulting from successive applications of 'f'.
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return The string created from the successive applications of 'f'. 
 * Returns NULL if the allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Applies the function 'f' on each character of the string passed as 
 * argument, passing its index as first argument. Each character is passed by 
 * address to 'f' to be modified if necessary.
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief Outputs the character 'c' to the given file descriptor.
 * @param c The character to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs the string 's' to the given file descriptor.
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief Outputs the string 's' to the given file descriptor followed by a 
 * newline.
 *
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Outputs the integer 'n' to the given file descriptor.
 *
 * @param n The integer to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putnbr_fd(int n, int fd);

/**
 * @brief Allocates (with malloc(3)) and returns a new node.
 * The member variable 'content' is initialized with the value of the parameter 
 * 'content'. The variable 'next' is initialized to NULL.
 *
 * @param content The content to create the new node with.
 * @return The new node.
 */
t_list	*ft_lstnew(void *content);

/**
 * @brief Adds the node 'new' at the beginning of the list.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param new The node to be added to the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Counts the number of nodes in a list.
 *
 * @param lst The beginning of the list.
 * @return The length of the list.
 */
int		ft_lstsize(t_list *lst);

/**
 * @brief Returns the last node of the list.
 *
 * @param lst The beginning of the list.
 * @return The last node of the list.
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief Adds the node 'new' at the end of the list.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param new The node to be added to the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Takes as a parameter a node and frees the memory of the node's 
 * content using the function 'del' given as a parameter and free the node. 
 * The memory of 'next' must not be freed.
 *
 * @param lst The node to free.
 * @param del The address of the function used to delete the content.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief Deletes and frees the given node and every successor of that node, 
 * using the function 'del' and free(3).
 * 
 * Finally, the pointer to the list must be set to NULL.
 * @param lst The address of a pointer to a node.
 * @param del The address of the function used to delete the content of the node.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief Iterates the list 'lst' and applies the function 'f' on the content of 
 * each node.
 *
 * @param lst The address of a pointer to a node.
 * @param f The address of the function used to iterate on the list.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Iterates the list 'lst' and applies the function 'f' on the content of 
 * each node. Creates a new list resulting of the successive applications of 
 * the function 'f'. The 'del' function is used to delete the content of a node 
 * if needed.
 * @param lst The address of a pointer to a node.
 * @param f The address of the function used to iterate on the list.
 * @param del The address of the function used to delete the content of a node 
 * if needed.
 * @return The new list. NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif