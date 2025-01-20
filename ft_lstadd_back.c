/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: risattou <risattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:21:39 by risattou          #+#    #+#             */
/*   Updated: 2025/01/20 18:51:41 by risattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	head = *lst;
	if (!lst || !new)
		return (0);
	if (*lst == NULL)
		*lst = new;
	else
	{
		while (head->next != NULL)
		{
			if (head->nb == new->nb)
				return (ft_error());
			head = head->next;
		}
		if (head->nb == new->nb)
			return (ft_error());
		head->next = new;
	}
	return (1);
}
