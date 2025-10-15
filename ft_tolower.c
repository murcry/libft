/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:03:25 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/15 22:53:44 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * If  c is an uppercase letter, tolower() returns its lowercase equivalent,
 * if a lowercase representation exists in the current locale.  Otherwise,
 * it returns c
 */

int	ft_tolower(int c)
{
	int	change;

	change = 'a' - 'A';
	if (c >= 'A' && c <= 'Z')
		c += change;
	return (c);
}
/*
int	main(void)
{
	int		letra;
	char	do_let;
	
	letra = 'K';
	do_let = ft_tolower(letra);
	printf("%c",do_let);
	return (0);
}*/
