/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 21:56:40 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/27 22:01:19 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	*src[8];
	// char	*dest[8];
	//int		num_bytes[8];
	int	i;
	//char	*found;

	src[0] = "Hello\n World!";
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
		printf("ft_putstr: %s is \n", src[i]);
		ft_putstr(src[i]);
		i++;
	}
	
	return (0);
}
