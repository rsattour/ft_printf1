/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: risattou <risattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:47:39 by risattou          #+#    #+#             */
/*   Updated: 2025/01/21 12:02:07 by risattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int ft_is_sorted(t_list **stack_a)
{
    int i = 0;
    t_list *tmp = *stack_a;
    while(tmp)
    {
        if(i == tmp->index)
            i++;
        else 
            return 1;
        tmp = tmp->next;
    }
    return 0;
}