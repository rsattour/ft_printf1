/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: risattou <risattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:30:20 by risattou          #+#    #+#             */
/*   Updated: 2024/11/25 22:42:47 by risattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("----------------------------------------------FT_PRINTF----------------------------------------------------\n");
int i ;

i = ft_printf("!%33.32d!", 1574917564);
printf("%i\n",i);

	printf("--------------------------------------------------------------------------------------------------\n");
	printf("----------------------------------------------PRINTF----------------------------------------------------\n");

i = printf("!%33.32d!", 1574917564);
printf("%i\n",i);
	printf("--------------------------------------------------------------------------------------------------\n");
}
