#include "pushswap.h"
int	ft_atoi(const char *str)
{
	long	result;
	int		sign;
	int		i;

	sign = 1;
	result = 0;
	i = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + str[i] - 48;
		if ((result > 2147483647)||(result < -2147483648))
			return (0);
		i++;
	}
	return (result * sign);
}
