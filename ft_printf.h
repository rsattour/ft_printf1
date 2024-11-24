#ifndef  FT_PRINTF_H
#define   FT_PRINTF_H


#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct s_flags{
    int zero;
    int dash;
    int number;
    int full_stop;
    int plus;
    int space;
    int hash;
    
} t_flag;

int ft_printf(const char *str, ...);
int ft_choose(const char **str,va_list *args,t_flag *flag);
int ft_printstring(char *str,t_flag *flag);
int ft_printnumber(size_t nbr,char *base,int check,t_flag *flag);
int ft_printnegative(int nbr,t_flag *flag);
int ft_putchar(char c,t_flag *flag);

#endif
