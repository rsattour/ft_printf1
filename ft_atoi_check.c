#include "pushswap.h"
static int check(const char *str)
{
    int i = 0;
    int c = 0;
    while(str[i])
    {
        if(str[i] == 32)
            i +=2;
        if(i > 0 && (str[i] == '-' || str[i] == '+'))
            return 2;
        i++;
    }
    return 0;
}
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
		i++;
	return (i);
}
int	ft_atoi_check(const char *str)
{
	long	result;
	int		i;

	result = 0;
	i = 0;
    if((check(str) == 0)&& (ft_strlen(str) <= 11) )
	{
        if (str[i] == '+' || str[i] == '-')
		    i++;
        if ((str[i] >= 48 && str[i] <= 57))
        {
            while (str[i] >= 48 && str[i] <= 57)
            {
                result = result * 10 + str[i] - 48;
                i++;
            }
        }
        else
            i= 0;
    }
	if ( i == 0 ||(result > 2147483647)||(result < -2147483648))
    {
        printf("ERROR");
        return (0);
    }
	return (1);
}
