/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:29:23 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/25 21:15:14 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	*src;
	char	dest[4][128];
	int		ret_val;

	src = "Hello World";
	printf("\nCase 1: Length of str < n \n");
	printf("Src: %s\n", src);
	ret_val = strlcpy(dest[0], src, 30);
	printf("strlcpy: %d %s\n", ret_val, dest[0]);
	ret_val = ft_strlcpy(dest[1], src, 30);
	printf("ft_strlcpy: %d %s\n", ret_val, dest[1]);
	printf("\nCase 2: Length of str >= n \n");
	printf("Src: %s\n", src);
	ret_val = strlcpy(dest[2], src, 10);
	printf("strlcpy: %d %s\n", ret_val, dest[2]);
	ret_val = ft_strlcpy(dest[3], src, 10);
	printf("ft_strlcpy: %d %s\n", ret_val, dest[3]);
	return (0);
}
