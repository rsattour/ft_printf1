/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnegativ.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: risattou <risattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:27:28 by risattou          #+#    #+#             */
/*   Updated: 2024/11/24 17:14:28 by risattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnegative(int nb, t_flag *flag)
{
	int	count;
	long nbr ;

	nbr = (long)nb;
	count = 0;
	if(flag && flag->dash == 0 && flag->number > count + ft_countnbr(nbr))
		{
			flag->number -=ft_countnbr(nbr);
			count += ft_putchar(' ',flag);
			flag->number = 0;
		}
	if (nbr < 0)
	{
		count += ft_putchar('-', 0);
		flag->number--;
		return (count + ft_printnumber((-nbr), "0123456789", 0, flag));
	}
	return (count + ft_printnumber((nbr), "0123456789", 0, flag));
}
