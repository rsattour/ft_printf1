/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ader <ader@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:27:31 by risattou          #+#    #+#             */
/*   Updated: 2024/11/25 00:47:52 by ader             ###   ########.fr       */
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

	count = 0;
	if(flag && flag->dash == 0 && flag->number > count + ft_countnbr_base(nbr,ft_len(base))+2)
		{
			flag->number -= ft_countnbr_base(nbr,ft_len(base))+2;
			count += ft_putchar(' ',flag);
		}
	count += ft_printstring("0x", 0);
	count += ft_printr(nbr, base, ft_len(base));
	if(flag && flag->dash == 1 && flag->number > count)
		{
			flag->number -= count;
			count += ft_putchar(' ',flag);
		}
	return (count);
}
