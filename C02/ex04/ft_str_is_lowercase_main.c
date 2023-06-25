/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:17:15 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/25 18:58:27 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str;

	str = "helloworld";
	printf("\nCase 1: %s", str);
	if (ft_str_is_lowercase(str))
		printf("is lowercase\n");
	else
		printf("is not lowercase\n");
	str = "He123 World";
	printf("\nCase 2: %s", str);
	if (ft_str_is_lowercase(str))
		printf("is lowercase\n");
	else
		printf("is not lowercase\n");
	str = "";
	printf("\nCase 3: %s", str);
	if (ft_str_is_lowercase(str))
		printf("is lowercase\n");
	else
		printf("is not lowercase\n");
	return (0);
}
