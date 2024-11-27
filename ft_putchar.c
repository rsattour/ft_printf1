/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: risattou <risattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:27:37 by risattou          #+#    #+#             */
/*   Updated: 2024/11/27 09:21:45 by risattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c, t_flag *flag)
{
	int	count;

	count = 0;
	if (flag && flag->number > 0 && flag->dash == 0)
	{
		while (flag && flag->number > count + 1)
		{
			write(1, " ", 1);
			count ++;
			
		}
	}
	count += write(1, &c, 1);
	if (flag && flag->number > 0 && flag->dash == 1)
	{
		while (flag && flag->number > count)
		{
			write(1, " ", 1);
			count ++;
		 }
	}
	return (count);
}
