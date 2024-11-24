#include "ft_printf.h"

int	ft_printnegative(int nbr,t_flag *flag)
{
	int count ;
    
    count = 0;
    if(nbr == -2147483648)
        return ft_printstring("-2147483648", 0);
    else if(nbr < 0)
    {
        count +=ft_putchar('-',0);
		return (count + ft_printnumber((-nbr),"0123456789",0,flag));
    }
	return (count + ft_printnumber((nbr),"0123456789",0,flag));
}