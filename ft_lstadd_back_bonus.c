/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:53:44 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/24 11:46:40 by digonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Add the 'new' element at the end of the list
 * lst: pointer address of the first element of the list
 * new: pointer address of the new element to add to the list
 * Returns nothing
 */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst != NULL)
		(ft_lstlast(*lst))->next = new;
	else
		*lst = new;
}
