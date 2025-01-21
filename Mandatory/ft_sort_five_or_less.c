/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five_or_less.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: risattou <risattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:10:34 by risattou          #+#    #+#             */
/*   Updated: 2025/01/21 11:01:58 by risattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	sort_threenmbr(t_list **stack_a)
{
	if ((*stack_a)->index < (*stack_a)->next->index
		&& (*stack_a)->index < (*stack_a)->next->next->index)
	{
		if ((*stack_a)->next->index > (*stack_a)->next->next->index)
		{
			reverse_rotate_a(stack_a);
			swap_a(stack_a);
		}
	}
	else if ((*stack_a)->next->index < (*stack_a)->index
		&& (*stack_a)->next->index < (*stack_a)->next->next->index)
	{
		if ((*stack_a)->index < (*stack_a)->next->next->index)
			swap_a(stack_a);
		else
			rotate_a(stack_a);
	}
	else
	{
		if ((*stack_a)->index < (*stack_a)->next->index)
			return (reverse_rotate_a(stack_a));
		swap_a(stack_a);
		reverse_rotate_a(stack_a);
	}
}

static int	find_pos(t_list *stack, int smallest)
{
	t_list	*tmp;
	int		pos;
	int		target_pos;

	tmp = stack;
	pos = 0;
	target_pos = 0;
	while (tmp)
	{
		if (tmp->index == smallest)
			target_pos = pos;
		pos++;
		tmp = tmp->next;
	}
	if (target_pos <= pos / 2)
		return (1);
	return (0);
}

static void	ft_five_or_for(t_list **stack_a, t_list **stack_b, int smallest)
{
	while (smallest < 2)
	{
		if ((*stack_a)->index == smallest)
		{
			push_b(stack_b, stack_a);
			smallest++;
			continue ;
		}
		if (find_pos(*stack_a, smallest))
			rotate_a(stack_a);
		else
			reverse_rotate_a(stack_a);
	}
}

void	sort_five_or_less(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size == 2)
	{
		if ((*stack_a)->index > (*stack_a)->next->index)
			swap_a(stack_a);
		return ;
	}
	if (size == 3)
		return (sort_threenmbr(stack_a));
	ft_five_or_for(stack_a, stack_b, 0);
	sort_threenmbr(stack_a);
	while (*stack_b)
	{
		push_a(stack_a, stack_b);
	}
}
