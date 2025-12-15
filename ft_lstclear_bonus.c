/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:13:15 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/24 13:59:36 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Deletes and free the memory of the element passed as parameter and all the
 * following elements using 'del' and free(3). Finally, the initial pointer must
 * be set to NULL.
 * lst: pointer address to one element
 * del: address of the function that can delete the element's content
 * Returns nothing
 */

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
