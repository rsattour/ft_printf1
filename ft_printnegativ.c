/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnegativ.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: risattou <risattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:27:28 by risattou          #+#    #+#             */
/*   Updated: 2024/11/25 16:52:03 by risattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnegative(int nb, t_flag *flag)
{
	int	count;
	long nbr ;

	nbr = (long)nb;
	count = 0;
	if(nbr < 0)
		flag->plus = 0;
	if(flag && (flag->dash == 0 && flag->zero == 0)&& flag->number > count + ft_countnbr(nbr))
		{
			flag->number -=ft_countnbr(nbr) + flag->plus;
			count += ft_putchar(' ',flag);
			flag->number = 0;
		}
	if(flag &&( flag->space == 1 || flag->plus == 1 )&& nbr > -1)
	{
		if(flag->plus == 1)		
		count +=ft_putchar('+',0);
		else if(flag->space == 1)
		count +=ft_putchar(' ',0);
		flag->number--;
	}
	if (nbr < 0)
	{
		count += ft_putchar('-', 0);
		flag->number--;
		return (count + ft_printnumber((-nbr), "0123456789", flag));
	}
	return (count + ft_printnumber((nbr), "0123456789", flag));
}
