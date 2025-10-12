/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 16:46:30 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/12 19:33:40 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	sgn;

	i = 0;
	sgn = 1;
	num = 0;
	if (nptr[0] == '-')
	{
		sgn *= -1;
		i++;
	}
	while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v'
		|| nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' '
		|| nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num + nptr[i] - '0';
		if (nptr[i + 1] >= '0' && nptr[i] <= '9')
			num *= 10;
		i++;
	}
	return (num * sgn);
}
/*int main(void)
{
    int     num;
    char    number[] = "  +56";

    num = ft_atoi(number);
    printf("%d", num);
    return (0);
}*/
