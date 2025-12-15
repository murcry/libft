/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:02:03 by digonza2          #+#    #+#             */
/*   Updated: 2025/12/15 17:51:06 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*chain;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	chain = malloc(ft_strlen(s) + 1);
	if (chain == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		chain[i] = f((unsigned int)i, s[i]);
		i++;
	}
	chain[i] = '\0';
	return (chain);
}
