/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:29:23 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/29 03:59:13 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*src[8];
	char	*dest[8];
	int	result;
	int	i;

	src[0] = "ABC";
	dest[0] = "AB";
	src[1] = "ABC";
	dest[1] = "ABC";
	src[2] = "ABA";
	dest[2] = "ABZ";
	src[3] = "ABJ";
	dest[3] = "ABC";
	i = 0;
	while (i < 4) {
		printf("\nCase %d: \n", i);
		result = strcmp(src[i], dest[i]);
		if (result == 0)
			printf("strcmp: %s and %s are equal\n", src[i], dest[i]);
		else if (result < 0)
			printf("strcmp: %s is less than %s\n", src[i], dest[i]);
		else
			printf("strcmp: %s is greater than %s\n", src[i], dest[i]);
		result = ft_strcmp(src[i], dest[i]);
		if (result == 0)
			printf("ft_strcmp: %s and %s are equal\n", src[i], dest[i]);
		else if (result < 0)
			printf("ft_strcmp: %s is less than %s\n", src[i], dest[i]);
		else
			printf("ft_strcmp: %s is greater than %s\n", src[i], dest[i]);
		i++;
	}

	return (0);
}
