/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:29:23 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/25 18:10:47 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, size_t n);

int	main(void)
{
	char	*src;
	char	dest[4][128];
	char	*ret_str;

	src = "Hello World";
	printf("\nCase 1: Length of str < n \n");
	printf("Src: %s\n", src);
	ret_str = strncpy(dest[0], src, 30);
	printf("strncpy: %s\n", ret_str);
	ret_str = ft_strncpy(dest[1], src, 30);
	printf("ft_strncpy: %s\n", ret_str);
	printf("\nCase 2: Length of str >= n \n");
	printf("Src: %s\n", src);
	ret_str = strncpy(dest[2], src, 10);
	printf("strncpy: %s\n", ret_str);
	ret_str = ft_strncpy(dest[3], src, 10);
	printf("ft_strncpy: %s\n", ret_str);
	return (0);
}
