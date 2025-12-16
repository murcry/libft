/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:14:36 by digonza2          #+#    #+#             */
/*   Updated: 2025/12/16 12:08:05 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns a new node.
 * The member variable 'content' is initialized with the value of the parameter 
 * 'content'. The variable 'next' is initialized to NULL.
 *
 * @param content The content to create the new node with.
 * @return The new node.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*packet;

	packet = malloc(sizeof(t_list));
	if (packet == NULL)
		return (NULL);
	packet->content = content;
	packet->next = NULL;
	return (packet);
}
