#include "pushswap.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	(*lst)->previous = new;
	*lst = new;
}