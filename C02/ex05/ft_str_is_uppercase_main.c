/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:17:15 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/25 19:03:58 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str;

	str = "HELLOWORLD";
	printf("\nCase 1: %s", str);
	if (ft_str_is_uppercase(str))
		printf("is uppercase\n");
	else
		printf("is not uppercase\n");
	str = "He123 World";
	printf("\nCase 2: %s", str);
	if (ft_str_is_uppercase(str))
		printf("is uppercase\n");
	else
		printf("is not uppercase\n");
	str = "";
	printf("\nCase 3: %s", str);
	if (ft_str_is_uppercase(str))
		printf("is uppercase\n");
	else
		printf("is not uppercase\n");
	return (0);
}
