/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:50:51 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/21 17:00:31 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Outputs the character ’c’ to the given file descriptor.
 * c: The character to output.
 * fd: The file descriptor on which to write.
 * Returns nothing.
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
