/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: risattou <risattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:59:42 by risattou          #+#    #+#             */
/*   Updated: 2025/01/16 17:37:36 by risattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	ft_count(char const *str, char c)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c&& str[i])
			i++;
		if (str[i] != c && str[i])
			cont++;
		while (str[i] != c && str[i])
			i++;
	}
	return (cont);
}

// static char	*ft_strdupp(char *str, char c)
// {
// 	int		i;
// 	char	*new;

// 	i = 0;
// 	while (str[i] != c && str[i])
// 		i++;
// 	new = (char *)malloc(i + 1);
// 	if (new == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (str[i] != c && str[i])
// 	{
// 		new[i] = str[i];
// 		i++;
// 	}
// 	new[i] = '\0';
// 	return (new);
// }



static int	ft_home( char *str, char c)
{
	int	index;
	int	i;
	int node ;

	index = 0;
	i = 0;
   
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] != c && str[i])
		{
			if (ft_atoi_check((char *)(str + i)) == 0)
                return (0);
		}
		while (str[i] != c && str[i])
			i++;
	}
	return (1);
}

int ft_split_check(char const *str, char c)
{
	// int		cont;
	// // char	**new;

	// cont = ft_count(str, c) + 1;
	// new = (char **)malloc(sizeof(char *) * cont);
	// if (new == NULL)
	// 	return (NULL);
     if (ft_count(str, c) == 0)
        {
            printf("ERROR");
            return (0);
        }
	return (ft_home((char *)str, c));
}
