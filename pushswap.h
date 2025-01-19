#ifndef PUSHSWAP_H
#define PUSHSWAP_H
#include <stdio.h>
#include <stdlib.h>
typedef struct s_flag{
    int error;
} t_flag;
typedef struct s_list{
    int nb;
    int index;
    struct s_list *previous;
    struct s_list *next;
} t_list;
void rotate_a(t_list **stack_a);
void rotate_b(t_list **stack_b);
void push_b(t_list **stack_b,t_list **stack_a);
void push_a(t_list **stack_a,t_list **stack_b);
void swap_a(t_list **stack_a);
void swap_b(t_list **stack_b);
int	ft_lstadd_back(t_list **lst, t_list *new_node);
int *ft_strjoin(int s1[],int len, int s2) ;
int	ft_atoi(const char *str);
int	ft_atoi_check(const char *str);
int  ft_split_check(char const *str, char c);
int ft_split(char const *str, char c,t_list **lst);
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new_node);
void reverse_rotate_a(t_list **stack_a);
void reverse_rotate_b(t_list **stack_b);
void	ft_lstindex(t_list **lst);
void	ft_lstclear(t_list **lst);
void ft_sortlist(t_list **stack_a);
void printList(t_list *head);
void ft_sort(t_list **stack_a,t_list **stack_b);
void sort_5(t_list **stack_a);
#endif