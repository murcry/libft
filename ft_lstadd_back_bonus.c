/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digonza2 <digonza2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:53:44 by digonza2          #+#    #+#             */
/*   Updated: 2025/10/23 21:09:09 by digonza2         ###   ########.fr       */
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
	t_list	*temp;
	t_list	*final;

	if (*lst == NULL)
	{
	}
	temp = lst;
	if (temp != NULL && new != NULL)
	{
		while (temp->next)
			temp = temp->next;
		(*lst)->next = new;
	}
}
