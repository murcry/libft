/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:53:44 by digonza2          #+#    #+#             */
/*   Updated: 2025/12/16 12:09:22 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds the node 'new' at the end of the list.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param new The node to be added to the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst != NULL)
		(ft_lstlast(*lst))->next = new;
	else
		*lst = new;
}
