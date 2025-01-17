
#include "pushswap.h"
void ft_sortlist(t_list **stack_a)
{
    if(!stack_a || !*stack_a)
        return;
    t_list *tmp = *stack_a;
    t_list *check;
    while(tmp)
    {
        int i = 0;
        check = *stack_a;
        while(check)
        {
            if((check->nb < tmp->nb))
                i++;
            check = check->next;
        }
        tmp->index = i;
        tmp = tmp->next;
    }
}
// void ft_sortlist(t_list **stack_a)
// {
//     t_list *current;
//     t_list *check;
    
//     if (!stack_a || !*stack_a)
//         return;

//     current = *stack_a;
//     while (current)
//     {
//         int index = 0;
//         check = *stack_a;
        
//         // Count how many numbers are smaller than current->nb
//         while (check)
//         {
//             if (check->nb < current->nb)
//                 index++;
//             check = check->next;
//         }
        
//         current->index = index;
//         current = current->next;
//     }
// }