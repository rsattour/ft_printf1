/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: risattou <risattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:27:34 by risattou          #+#    #+#             */
/*   Updated: 2024/11/24 17:31:12 by risattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i] != '\0')
		i++;
	return (i);
}

int	ft_printstring(char *str, t_flag *flag)
{
	int	count;

	count = 0;
	if (!str)
	{
		return (ft_printstring("(null)", 0));
	}
	if(flag && flag->dash == 0 && flag->number > ft_strlen(str))
	{
		flag->number -= ft_strlen(str);
		count += ft_putchar(' ',flag);
	}
	while (*str != '\0')
	{
		count += ft_putchar(*str, 0);
		str++;
	}
		if(flag && flag->dash == 1 && flag->number > count)
	{
		flag->number -= count;
		count += ft_putchar(' ',flag);
	}
	return (count);
}
