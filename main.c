#include "pushswap.h"


int ft_check(char *av)
{
    int  i = 0;
    while(av[i])
    {
        if(!((av[i] >= '0' && av[i] <= '9') || av[i] == 32 || av[i] == '-'|| av[i] == '+'))
        {

            printf("ERROR");
            return 0;
        }
        i++;
    }
    return 1;
}
int ft_space(char *av)
{
    int i = 0;
    while(av[i])
    {
        if(av[i] == 32)
            return 1;
        i++;
    }
    return 0;
}
void printList(t_list *head) {
    t_list *current = head;
    while (current != NULL) {
        printf("%d|%d++ ", current->nb, current->index); 
        current = current->next;
    }
    printf("\n");
}
int main(int ac,char *av[])
{
    if(ac <= 1)
        return 0;
    int i = 1;
    while(i < ac)
    {
        if(ft_check(av[i]) == 0)
            return 0;
        i++;
    }
    i = 1;
    while(i < ac)
    {
        if(ft_space(av[i]) == 1)
        {
            if(ft_split_check(av[i],32) == 0)
            return 0;
        }
        else if(ft_atoi_check(av[i]) == 0)
            return 0;
        i++;
    }
    i = 1;
    t_list *head = NULL;
    while(i < ac)
    {
        if(ft_space(av[i]) == 1)
           {
                if( ft_split(av[i],32,&head) == 0)
                {
                    ft_lstclear(&head);
                    return 0;
                }
            }
        else 
            if (ft_lstadd_back(&head, ft_lstnew (ft_atoi(av[i]))) == 0)
                {
                    ft_lstclear(&head);
                    return 0;
                }
        i++;
    }
    t_list *stack_a = head;
    t_list *stack_b = NULL;
    // swap_a(&stack_a);
    // push_b(&stack_b,&stack_a);
    // rotate_a(&stack_a);
    ft_lstindex(&stack_a);
    // reverse_rotate_a(&stack_a);
    ft_sortlist(&stack_a);
    printf("A:");
    printList(stack_a);
    printf("B:");
    printList(stack_b);
    // push_a(&stack_a,&stack_b);
    // printf("A:");
    // printList(stack_a);
    // printf("B:");
    // printList(stack_b);
    // push_a(&stack_a,&stack_b);
}
