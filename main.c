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
           {if( ft_split(av[i],32,&head) == 0)
               { return 0;}}
        else 
            if (ft_lstadd_back(&head, ft_lstnew (ft_atoi(av[i]))) == 0)
                {return 0;}
        i++;
    }
    
}
