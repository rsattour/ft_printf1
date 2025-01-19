#include "pushswap.h"
// static int check(const char *str)
// {
//     int i = 0;
//     int c = 0;
//     while(str[i])
//     {
//         if(str[i] == 32)
//             {
//                 c = 1;
//                 i++;
//             }
//         else 
//             c = 0;
//         if(i > 0 && (str[i] == '-' || str[i] == '+') && c == 0)
//             return 2;
//         i++;
//     }
//     return 0;
// }
static int check(const char *str)
{
    int i = 0;
    int last_was_space = 0;

    while (str[i])
    {
        if (str[i] == ' ')
            last_was_space = 1;
        else
        {
            if (i > 0 && (str[i] == '-' || str[i] == '+') && !last_was_space)
                return 2;
            last_was_space = 0;
        }
        i++;
    }
    return 0;
}
int	ft_strlen(const char *str)
{
	int	i;
	int	g;

	i = 0;
    g = 0;
    while(str[i+g] != '\0' && str[i+g] == 48)
        g++;
	while (str[i+g] != '\0' && (str[i+g] >= 48 && str[i+g] <= 57))
		i++;
	return (i);
}
int	ft_atoi_check(const char *str)
{
	long	result;
	long	sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
    if((check(str) == 0)&& (ft_strlen(str) <= 11) )
	{
        if (str[i] == '+' || str[i] == '-')
		{  
            i++;
            sign = -1;
        }
        if ((str[i] >= 48 && str[i] <= 57))
        {
            while (str[i] >= 48 && str[i] <= 57)
            {
                result = result * 10 + str[i] - 48;
                i++;
            }
            result *=sign;
        }
        else
            i= 0;
    }
	if ( i == 0 ||(result > 2147483647)||(result < -2147483648))
    {
        // printf("%d",i);
        printf("ERROR");
        return (0);
    }
	return (1);
}
