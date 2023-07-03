/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:08:15 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/27 16:36:53 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*src[8];
	char	*dest[8];
	int		num_bytes[8];
	int	result;
	int	i;

	src[0] = "ABC";
	dest[0] = "AB";
	num_bytes[0] = 3;
	src[1] = "ABC";
	dest[1] = "AB";
	num_bytes[1] = 2;
	i = 0;
	while (i < 2) {
		printf("\nCase %d: \n", i);
		result = strncmp(src[i], dest[i], num_bytes[i]);
		if (result == 0)
			printf("strncmp: %s and %s are equal in the first %d bytes\n", src[i], dest[i], num_bytes[i]);
		else if (result < 0)
			printf("strncmp: %s is less than %s\n", src[i], dest[i]);
		else
			printf("strncmp: %s is greater than %s\n", src[i], dest[i]);
		result = ft_strncmp(src[i], dest[i], num_bytes[i]);
		if (result == 0)
			printf("ft_strncmp: %s and %s are equal in the first %d bytes\n", src[i], dest[i], num_bytes[i]);
		else if (result < 0)
			printf("ft_strncmp: %s is less than %s\n", src[i], dest[i]);
		else
			printf("ft_strncmp: %s is greater than %s\n", src[i], dest[i]);
		i++;
	}

	return (0);
}
