#include "pushswap.h"

int	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	head = *lst;
	if (!lst || !new)
		return 0;
	if (*lst == NULL)
	{
        *lst = new;
        new->previous = *lst;
    }
	else
	{
		while (head->next != NULL)
        {
            if (head->nb == new->nb)
            {
                printf("ERROR");
                return (0);
            }
			head = head->next;
        }
        if (head->nb == new->nb)
        {
            printf("ERROR");
            return (0);
        }
		head->next = new;
        new->previous = head;
	}
    return 1;
}