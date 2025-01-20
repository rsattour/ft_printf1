/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: risattou <risattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 00:11:57 by risattou          #+#    #+#             */
/*   Updated: 2025/01/20 18:52:35 by risattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_lstlast(t_list **lst)
{
	t_list	*tmp1;
	t_list	*tmp;

	if (!(*lst))
		return ;
	tmp1 = *lst;
	while (tmp1->next->next != NULL)
		tmp1 = tmp1->next;
	tmp = tmp1->next;
	tmp1->next = NULL;
}
