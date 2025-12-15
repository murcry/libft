/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:03:40 by digonza2          #+#    #+#             */
/*   Updated: 2025/12/15 17:52:15 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	car;

	car = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == car)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
