/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:09:47 by digonza2          #+#    #+#             */
/*   Updated: 2025/12/15 17:42:23 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			car;

	car = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == car)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == car)
		return ((char *)&s[i]);
	return (NULL);
}
