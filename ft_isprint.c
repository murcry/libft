/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:14:22 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/15 22:35:03 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The isprint() function tests for any printing character, including space.
 * The value of the argument must representable as an unsigned char or the value
 * of EOF. The isprint() function returns zero if the character tests false and
 * returns non-zero if the character tests true.
 */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
