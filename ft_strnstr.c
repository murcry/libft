/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 23:09:23 by digonza2          #+#    #+#             */
/*   Updated: 2025/12/15 17:51:55 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	i = 0;
	j = 0;
	little_len = ft_strlen(little);
	if (*little == '\0')
		return ((char *)big);
	if (*big == '\0' || len == 0)
		return (NULL);
	while (i + little_len <= len && big[i] != '\0')
	{
		while (big[i + j] == little[j] && little[j] && i + j < len)
		{
			j++;
		}
		if (j == little_len)
			return ((char *)&(big[i]));
		j = 0;
		i++;
	}
	return (NULL);
}
