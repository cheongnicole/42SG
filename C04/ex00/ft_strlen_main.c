/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 21:18:31 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/27 21:50:22 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int	main(void)
{
	char	*src[8];
	// char	*dest[8];
	//int		num_bytes[8];
	int	i;
	//char	*found;

	src[0] = "Needle";
	src[1] = "";
/*
	dest[0] = "Haystack";
	src[1] = "Haystack";
	dest[1] = "Needle";
	src[2] = "or";
	dest[2] = "Hello World";
	src[3] = "Haystack";
	dest[3] = "";
	src[4] = "";
	dest[4] = "Haystack";
	src[5] = "";
	dest[5] = "";
*/
	//num_bytes[0] = 7;
	i = 0;
	while (i < 2) {
		printf("\nCase %d: \n", i);
		printf("strlen of: %s is %d\n", src[i], (int)strlen(src[i]));
		printf("ft_strlen of: %s is %d\n", src[i], ft_strlen(src[i]));
		i++;
	}
	
	return (0);
}
