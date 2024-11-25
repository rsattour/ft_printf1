/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: risattou <risattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:27:31 by risattou          #+#    #+#             */
/*   Updated: 2024/11/25 21:30:48 by risattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}
static int	ft_zero(t_flag *flag,int len)
{
	int	count;

	count = 0;
	while(flag->full_stop > len)
	{
		count += write(1,"0",1);
		flag->full_stop--;
	}
	return count;

}
static int	ft_printr(size_t num, char *base, size_t len)
{
	int	count;

	count = 0;
	if (num >= len)
	{
		count += ft_printr(num / len, base, len);
		count += ft_printr(num % len, base, len);
	}
	else
		count += ft_putchar(base[num], 0);
	return (count);
}

int	ft_printptr(size_t nbr, char *base, t_flag *flag)
{
	int	count;
	int len ;

	count = 0;
	len = ft_countnbr_base(nbr,ft_len(base),0)+2;
	if(flag && len < flag->full_stop)
		len = flag->full_stop;
	if(flag && flag->dash == 0 && flag->number > count +len )
		{
			flag->number -= len;
			count += ft_putchar(' ',flag);
		}
	if(flag && ( flag->full_stop >= len))
		count += ft_zero(flag,ft_countnbr_base(nbr,ft_len(base)+2,0));	
	count += ft_printstring("0x", 0);
	count += ft_printr(nbr, base, ft_len(base));
	if(flag && flag->dash == 1 && flag->number > count)
		{
			flag->number -= count;
			count += ft_putchar(' ',flag);
		}
	return (count);
}
