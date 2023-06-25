/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:16:54 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/25 17:18:56 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src;
	char	dest[128];
	char	*ret_str;

	src = "Hello World";
	printf("Src: %s\n", src);
	ret_str = strcpy(dest, src);
	printf("strcpy: %s\n", ret_str);
	ret_str = ft_strcpy(dest, src);
	printf("ft_strcpy: %s\n", ret_str);
	return (0);
}
