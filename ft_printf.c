/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: risattou <risattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:27:18 by risattou          #+#    #+#             */
/*   Updated: 2024/11/24 16:27:04 by risattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_flage(const char **str, t_flag *flag)
{
	while (**str == ' ' || **str == '+' || **str == '#' || **str == '0'
		|| **str == '-' )
	{
		if (**str == ' ')
			flag->space = 1;
		else if (**str == '+')
			flag->plus = 1;
		else if (**str == '#')
			flag->hash = 1;
		else if (**str == '0')
			flag->zero = 1;
		else if (**str == '-')
			flag->dash = 1;
		(*str)++;
	}
	while (**str >= 48 && **str <= 57)
	{
		flag->number = flag->number * 10 + **str - 48;
		(*str)++;
	}
	if (**str == '.')
	{
		(*str)++;
		flag->full_stop = 0;
		while (**str >= 48 && **str <= 57)
		{
			flag->full_stop = flag->full_stop * 10 + **str - 48;
			(*str)++;
		}
	}
}

static void	ft_reset(t_flag *flag)
{
	flag->dash = 0;
	flag->number = 0;
	flag->space = 0;
	flag->full_stop = -1;
	flag->zero = 0;
	flag->plus = 0;
	flag->hash = 0;
}

int	ft_printf(const char *str, ...)
{
	int		count;
	t_flag	flag;
	va_list	args;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		ft_reset(&flag);
		if (*str == '%')
		{
			str++;
			ft_flage(&str, &flag);
			count += ft_choose(&str, &args, &flag);
		}
		else
		{
			write(1, str, 1);
			count++;
			str++;
		}
	}
	va_end(args);
	return (count);
}
