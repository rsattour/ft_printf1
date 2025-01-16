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
int	ft_lstadd_back(t_list **lst, t_list *new_node);
int *ft_strjoin(int s1[],int len, int s2) ;
int	ft_atoi(const char *str);
int	ft_atoi_check(const char *str);
int  ft_split_check(char const *str, char c);
int ft_split(char const *str, char c,t_list **lst);
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new_node);
#endif