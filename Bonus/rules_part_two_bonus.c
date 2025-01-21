/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_part_two_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: risattou <risattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:49:46 by risattou          #+#    #+#             */
/*   Updated: 2025/01/21 12:45:53 by risattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap_bonus.h"

void	push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!stack_b || !*stack_b)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = NULL;
	ft_lstadd_front(stack_a, tmp);
	ft_putstr("pa\n");
}

void	rotate_a(t_list **stack_a)
{
	t_list	*tmp;

	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack_a, tmp);
	ft_putstr("ra\n");
}

void	rotate_b(t_list **stack_b)
{
	t_list	*tmp;

	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack_b, tmp);
	ft_putstr("rb\n");
}

void	reverse_rotate_a(t_list **stack_a)
{
	t_list	*tmp1;
	t_list	*tmp;

	if (!(*stack_a))
		return ;
	tmp1 = *stack_a;
	while (tmp1->next->next != NULL)
		tmp1 = tmp1->next;
	tmp = tmp1->next;
	tmp1->next = NULL;
	ft_lstadd_front(stack_a, tmp);
	ft_putstr("rra\n");
}

void	reverse_rotate_b(t_list **stack_b)
{
	t_list	*tmp1;
	t_list	*tmp;

	if (!(*stack_b))
		return ;
	tmp1 = *stack_b;
	while (tmp1->next->next != NULL)
		tmp1 = tmp1->next;
	tmp = tmp1->next;
	tmp1->next = NULL;
	ft_lstadd_front(stack_b, tmp);
	ft_putstr("rrb\n");
}
