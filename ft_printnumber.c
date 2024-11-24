/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumber.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: risattou <risattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:27:31 by risattou          #+#    #+#             */
/*   Updated: 2024/11/24 17:21:23 by risattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

static int	ft_printr(unsigned int num, char *base, unsigned int len)
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

static int	ft_printptr(size_t num, char *base, size_t len)
{
	int	count;

	count = 0;
	if (num >= len)
	{
		count += ft_printptr(num / len, base, len);
		count += ft_printptr(num % len, base, len);
	}
	else
		count += ft_putchar(base[num], 0);
	return (count);
}

int	ft_printnumber(size_t nbr, char *base, int check, t_flag *flag)
{
	int	count;

	count = 0;
	if(flag && flag->dash == 0 && flag->number > count + ft_countnbr_base(nbr,ft_len(base)))
		{
			flag->number -= ft_countnbr_base(nbr,ft_len(base));
			count += ft_putchar(' ',flag);
		}
	if (check == 1)
	{
		count += ft_printstring("0x", 0);
		return (count + ft_printptr(nbr, base, ft_len(base)));
	}
	else if (check == 2)
		count += ft_printstring("0X", 0);
	count += ft_printr(nbr, base, ft_len(base));
	if(flag && flag->dash == 1 && flag->number > count)
		{
			flag->number -= count;
			count += ft_putchar(' ',flag);
		}
	return (count);
}
