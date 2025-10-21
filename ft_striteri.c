/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:44:53 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/21 16:41:23 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * This function iterates through the string 's', passing the index of each
 * character and a pointer to the character itself to the function 'f'.
 * This allows for in-place modification of the string.
 * s: The string to iterate over.
 * f: The function to apply to each character.
 * Returns nothing.
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s != NULL && f != NULL)
	{
		i = 0;
		while (s[i])
		{
			f((unsigned int) i, &s[i]);
			i++;
		}
	}
}
