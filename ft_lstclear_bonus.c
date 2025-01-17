/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: risattou <risattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 07:59:50 by risattou          #+#    #+#             */
/*   Updated: 2025/01/17 16:31:11 by risattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

// void	ft_lstdelone(t_list *lst, void (*del)(void *))
// {
// 	if (!lst || !del)
// 		return ;
// 	del(lst->content);
// 	free(lst);
// }
void	ft_lstclear(t_list **lst)
{
	t_list	*head;
	t_list	*new;

	if (!lst )
		return ;
	head = *lst;
	while (head != NULL)
	{
		new = head->next;
		free(head);
		head = new;
	}
	*lst = NULL;
}
