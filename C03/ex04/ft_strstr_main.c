/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:03:30 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/27 18:00:52 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*src[8];
	char	*dest[8];
	//int		num_bytes[8];
	int	i;
	char	*found;

	src[0] = "Needle";
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
	//num_bytes[0] = 7;
	i = 0;
	while (i < 6) {
		printf("\nCase %d: \n", i);
		printf("strstr: finding %s in %s: \n", src[i], dest[i]);
		found = strstr(dest[i], src[i]);
		if (found)
			printf("%s\n", found);
		else
			printf("not found\n");
		printf("ft_strstr: finding %s in %s: \n", src[i], dest[i]);
		found = ft_strstr(dest[i], src[i]);
		if (found)
			printf("%s\n", found);
		else
			printf("not found\n");
		i++;
	}

	return (0);
}
