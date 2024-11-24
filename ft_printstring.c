#include "ft_printf.h"
int ft_printstring(char *str, t_flag *flag)
{
	int	count;

	count = 0;
    if(flag)
        flag->dash = 1;
	if (!str )
	{
		return ft_printstring("(null)",0);
	}
	while (*str != '\0')
	{
		count +=ft_putchar(*str,0);
		str++;
	}
	return count;
}