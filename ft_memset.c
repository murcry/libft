/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:55:03 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/15 22:38:15 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The memset() function writes len bytes of value c (converted to an unsigned
 * char) to the string b. The memset() function returns its first argument.
 */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	int		nums[10];
	char	ltr[] = "abcdefghijk";
	int		i;

	i = 0;
	while (i < 10)
	{
		nums[i] = i;
		i++;
	}
	i = 0;
	while (i < 10)
		printf("%d", nums[i++]);
	printf("\n");
	printf("%s", ltr);
	printf("\n");
	ft_memset(nums, 7, sizeof(int)*3);
	ft_memset(ltr, '&', 5);
	i = 0;
	while (i < 10)
		printf("%d", nums[i++]);
	printf("\n");
	printf("%s", ltr);
	printf("\n");
	return (0);
}*/
