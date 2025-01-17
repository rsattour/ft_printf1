#include "pushswap.h"
void swap_node(t_list *stack_a,t_list *stack_b)
{
    int tmp = stack_a->nb;
    stack_a->nb = stack_b->nb;
    stack_b->nb = tmp;
}
void swap_a(t_list **stack_a)
{
    swap_node(*stack_a, (*stack_a)->next);
}
void swap_b(t_list **stack_b)
{
    swap_node(*stack_b, (*stack_b)->next);
}
void push_b(t_list **stack_b,t_list **stack_a)
{
    t_list *tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    if (*stack_a != NULL)
        (*stack_a)->previous = NULL;
    tmp->next = NULL;
    ft_lstadd_front(stack_b, tmp);
    ft_lstindex(stack_b);
    ft_lstindex(stack_a);

}
void push_a(t_list **stack_a,t_list **stack_b)
{
    t_list *tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    if (*stack_b != NULL)
        (*stack_b)->previous = NULL;
    tmp->next = NULL;
    ft_lstadd_front(stack_a, tmp);
    ft_lstindex(stack_b);
    ft_lstindex(stack_a);
}
void rotate_a(t_list **stack_a)
{
    t_list *tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    if (*stack_a != NULL)
        (*stack_a)->previous = NULL;
    tmp->next = NULL;
    ft_lstadd_back(stack_a, tmp);
    ft_lstindex(stack_a);
}
void rotate_b(t_list **stack_b)
{
    t_list *tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    if (*stack_b != NULL)
        (*stack_b)->previous = NULL;
    tmp->next = NULL;
    ft_lstadd_back(stack_b, tmp);
    ft_lstindex(stack_b);
}
void reverse_rotate_a(t_list **stack_a)
{
	if (!(*stack_a))
		return ;
	t_list *tmp1 = *stack_a;
	while (tmp1->next->next != NULL)
		tmp1 = tmp1->next;
	t_list *tmp = tmp1->next;
	tmp1->next = NULL;
	tmp->previous = NULL;
    ft_lstadd_front(stack_a, tmp);
    ft_lstindex(stack_a);
}
void reverse_rotate_b(t_list **stack_b)
{
	if (!(*stack_b))
		return ;
	t_list *tmp1 = *stack_b;
	while (tmp1->next->next != NULL)
		tmp1 = tmp1->next;
	t_list *tmp = tmp1->next;
	tmp1->next = NULL;
	tmp->previous = NULL;
    ft_lstadd_front(stack_b, tmp);
    ft_lstindex(stack_b);
}