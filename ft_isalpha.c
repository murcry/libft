/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:00:26 by digonza2          #+#    #+#             */
/*   Updated: 2025/09/29 12:35:00 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_isalpha(int c)
{
	if (!(c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0);
	else
		return (1);
}
/*
int	main(void)
{
	int	c;
	int	d;

	c = '?';
	d = ft_isalpha(c);
	printf("%d", d);
	return (0);
}
*/
