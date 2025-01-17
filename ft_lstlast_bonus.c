/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: risattou <risattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 00:11:57 by risattou          #+#    #+#             */
/*   Updated: 2025/01/17 15:58:43 by risattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void ft_lstlast(t_list **lst)
{
	if (!(*lst))
		return ;
	t_list *tmp1 = *lst;
	while (tmp1->next->next != NULL)
		tmp1 = tmp1->next;
	t_list *tmp = tmp1->next;
	tmp1->next = NULL;
	tmp->previous = NULL;
	
}
