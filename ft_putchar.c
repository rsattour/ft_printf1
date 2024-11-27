/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ader <ader@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:27:37 by risattou          #+#    #+#             */
/*   Updated: 2024/11/25 00:39:57 by ader             ###   ########.fr       */
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
			count += write(1, " ", 1);
	}
	count += write(1, &c, 1);
	if (flag && flag->number > 0 && flag->dash == 1)
	{
		while (flag && flag->number > count)
			count += write(1, " ", 1);
	}
	return (count);
}
