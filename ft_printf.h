/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ader <ader@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:27:25 by risattou          #+#    #+#             */
/*   Updated: 2024/11/26 03:27:54 by ader             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_flags
{
	int	zero;
	int	dash;
	int	number;
	int	full_stop;
	int	plus;
	int	space;
	int	hash;

}		t_flag;

int		ft_printf(const char *str, ...);
int		ft_choose(const char **str, va_list *args, t_flag *flag);
int		ft_printstring(char *str, t_flag *flag);
int		ft_printnumber(unsigned int nbr, char *base, t_flag *flag);
int		ft_printptr(size_t nbr, char *base, t_flag *flag);
int		ft_printnegative(int nbr, t_flag *flag);
int		ft_putchar(char c, t_flag *flag);
int ft_countnbr_base(unsigned int nbr,int len,t_flag *flag);
int		ft_countnbr(long nbr);

#endif
