/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:08:15 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/27 16:59:38 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	*src[8];
	char	dest[8][128];
	//int		num_bytes[8];
	int	i;

	src[0] = "Hello World";
	strcpy(dest[0], "Destination: ");
	i = 0;
	while (i < 1) {
		printf("\nCase %d: \n", i);
		printf("strcat: copying %s to %s: ", src[i], dest[i]);
		printf("%s\n", strcat(dest[i], src[i]));
		strcpy(dest[0], "Destination: "); // reset
		printf("ft_strcat: copying %s to %s: ", src[i], dest[i]);
		printf("%s\n", ft_strcat(dest[i], src[i]));
		i++;
	}

	return (0);
}
