#include "pushswap.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// void ft_sort(t_list **stack_a,t_list **stack_b)
// {
//     int range_x = 0;
//     int max = ft_lstsize((*stack_a));
//     int range_y =  max * 0.048 +10;
//     while((*stack_a) != NULL)
//     {
//         if((*stack_a)->nb < range_y && (*stack_a)->nb > range_x)
//         {
//             push_b(stack_b, stack_a);
//         }
//         else
//             rotate_a(stack_a);
//         range_x++;
//         range_y++;
//     }
// }
int ft_position(t_list **stack_b,int max)
{
    t_list *tmp = *stack_b;
    int i = 0;
	while (tmp != NULL)
	{
        if(tmp->index == max)
            return i;
		tmp = tmp->next;
		i++;
	}
    return (i);
}
void ft_sort(t_list **stack_a, t_list **stack_b)
{
    int range_x = 0;
    int max = ft_lstsize((*stack_a))-1;
    int range_y = max * 0.048 + 10;  
    // printf("rang_y%i",range_y);// Initial window size
    while (*stack_a != NULL)
    {

        
        // Check if (*stack_a) number is within the sliding window
        if ((*stack_a)->index >= range_x && (*stack_a)->index <= range_y)
        {

            push_b(stack_b, stack_a);
            puts("pb");
            range_x++;
            range_y++;
        }
        else if((*stack_a)->index < range_x)
            {
                push_b(stack_b, stack_a);
            puts("pb");
                rotate_b(stack_b);
            puts("rb");
                range_x++;
                range_y++;
            }
      
            
        // If we've done a full rotation without finding numbers in range,
        // move the window up
        // if (remaining == max)
        // {
        // }
    }
    while(*stack_b != NULL)
    {
        int tmp = ft_position(stack_b,max);
        if (tmp <= max/2)
        {
            rotate_b(stack_b);
            puts("rb");
            // puts("B->");
        }
        else if(tmp > max/2 )
        {
            reverse_rotate_b(stack_b);
            puts("rrb");
            // puts("BB");
        }
        if((*stack_b)->index ==  max )
            {
            // puts("A");
                push_a(stack_a, stack_b);
            puts("pa");
                max--;
            }
    }
}
// void sort_5(t_list **stack_a)
// {
//     // if((*stack_a)->index == 2)
//     // {
//     //     rotate_a(stack_a);
//     //     puts("ra");
//     // }
//     if((*stack_a)->index  >(*stack_a)->next->index)
//     {
//         swap_a(stack_a);
//         puts("sa");
//     }
//     else if((*stack_a)->index > (*stack_a)->next->next->index)
//     {
//         reverse_rotate_a(stack_a);
//         puts("rra");
//     }
//     else if((*stack_a)->index  < (*stack_a)->next->next->index )
//     {
//         reverse_rotate_a(stack_a);
//         // rotate_a(stack_a);
//         swap_a(stack_a);
//         puts("ra");
//         // puts("rra");
//     }
    
//     printf("A:");
//     printList(*stack_a);
// }

