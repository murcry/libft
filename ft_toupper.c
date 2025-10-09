/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:58:46 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/09 16:18:29 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	change;
	
	change = 'a' - 'A';
	if (c >= 'a' && c <= 'z')
		c -= change;
	return (c);
}
/*
int	main(void)
{
	int		letra;
	char	up_let;
	
	letra = 's';
	up_let = ft_toupper(letra);
	printf("%c",up_let);
	return (0);
}*/
