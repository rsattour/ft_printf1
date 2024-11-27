/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: risattou <risattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:30:20 by risattou          #+#    #+#             */
/*   Updated: 2024/11/27 09:56:59 by risattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <fcntl.h>
#include <sys/fcntl.h>

int	main(void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
    close(1);
	// printf("----------------------------------------------FT_PRINTF----------------------------------------------------\n");
  int fd = open("test.txt" , O_CREAT | O_RDWR , 0777);
   

    int i = ft_printf("|%s%c|\n","reda",'q') ;
    write(fd,&i,1);// different memory
    write(fd,"\n",1);// different memory

	// printf("--------------------------------------------------------------------------------------------------\n");
	// printf("----------------------------------------------PRINTF----------------------------------------------------\n");

   i =  printf("|%s%c|\n","reda",'q')+ 48;// different memory
    write(fd,&i,1);// different memory
    close(fd);

	// printf("--------------------------------------------------------------------------------------------------\n");
}
