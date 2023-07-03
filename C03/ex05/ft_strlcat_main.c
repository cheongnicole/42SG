/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:08:15 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/29 00:55:10 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	*src[8];
	char	dest[8][128];
	int	num_bytes[8];
	int	i;
	int	size;
	//char	*found;

	src[0] = "Hello World";
	num_bytes[0] = 0;
	src[1] = "Hello World";
	num_bytes[1] = 4;
	src[2] = "Hello World";
	num_bytes[2] = 5;
	src[3] = "Hello World";
	num_bytes[3] = 6;
	src[4] = "Hello World";
	num_bytes[4] = 8;
	src[5] = "Hello World";
	num_bytes[5] = 10;
	src[6] = "Hello World";
	num_bytes[6] = 20;
	/*
	src[4] = "";
	num_bytes[4] = 0;
	src[5] = "";
	num_bytes[5] = 5;
	src[6] = "";
	num_bytes[6] = 10;
	src[7] = "";
	num_bytes[7] = 20;
	*/

	i = 0;
	while (i < 7) {
		printf("\nCase %d: \n", i);
		strcpy(dest[i], "Dest:");
		printf("strlcat: cat %s to %s in %d bytes: \n", src[i], dest[i], num_bytes[i]);
		size = strlcat(dest[i], src[i], num_bytes[i]);
		printf("%s returns %d\n", dest[i], size);

		strcpy(dest[i], "Dest:");
		printf("ft_strlcat: cat %s to %s in %d bytes: \n", src[i], dest[i], num_bytes[i]);
		size = ft_strlcat(dest[i], src[i], num_bytes[i]);
		printf("%s returns %d\n", dest[i], size);
		i++;
	}

	return (0);
}
