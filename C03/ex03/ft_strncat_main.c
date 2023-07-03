/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:03:30 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/27 17:31:50 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	*src[8];
	char	dest[8][128];
	int		num_bytes[8];
	int	i;

	src[0] = "Hello World";
	num_bytes[0] = 7;
	src[1] = "Hello World";
	num_bytes[1] = 30;
	src[2] = "";
	num_bytes[2] = 7;
	i = 0;
	while (i < 3) {
		strcpy(dest[i], "Destination: ");
		printf("\nCase %d: \n", i);
		printf("strcat: cat %d bytes of %s to %s: \n", num_bytes[i], src[i], dest[i]);
		printf("%s\n", strncat(dest[i], src[i], num_bytes[i]));
		strcpy(dest[i], "Destination: "); // reset
		printf("ft_strncat: cat %d bytes of %s to %s: \n", num_bytes[i], src[i], dest[i]);
		printf("%s\n", ft_strncat(dest[i], src[i], num_bytes[i]));
		i++;
	}

	return (0);
}
