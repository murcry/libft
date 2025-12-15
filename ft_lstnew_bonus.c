/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:14:36 by digonza2          #+#    #+#             */
/*   Updated: 2025/12/15 16:45:31 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
