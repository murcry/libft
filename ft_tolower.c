/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:03:25 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/09 16:17:38 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
