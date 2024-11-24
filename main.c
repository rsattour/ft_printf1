/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: risattou <risattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:30:20 by risattou          #+#    #+#             */
/*   Updated: 2024/11/24 17:26:35 by risattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("--------------------------------------------------------------------------------------------------\n");
	// ft_printf("|%-5x|\n", 10);
	// printf("|%-5x|\n", 10);
	ft_printf("0|%-10s|\n","01234");
	printf("o|%-10s|\n","01234");
	ft_printf("0|%10s|\n","01234");
	printf("o|%10s|\n","01234");
	ft_printf("0|%s|\n","01234");
	printf("o|%s|\n","01234");
	printf("--------------------------------------------------------------------------------------------------\n");
}
