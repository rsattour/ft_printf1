/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: risattou <risattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:27:41 by risattou          #+#    #+#             */
/*   Updated: 2025/01/24 13:01:49 by risattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap_bonus.h"

int	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	return (0);
}
int	ft_error_r(char **str)
{
	(void) *str;
	free(*str);
	ft_putstr_fd("Error\n", 2);
	return (0);
}
