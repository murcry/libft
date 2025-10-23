/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:14:36 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/23 16:24:41 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Allocate (with malloc()) and return the new element. The member variable
 * 'content' is initialized with the value of the 'content' parameter.
 * The 'next' variable is initialized to NULL.
 * content: The content of the new element
 * Return the new element.
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
