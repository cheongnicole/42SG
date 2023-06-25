/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha_main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:17:15 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/25 18:39:55 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str;

	str = "HelloWorld";
	printf("\nCase 1: %s", str);
	if (ft_str_is_alpha(str))
		printf("is alpha\n");
	else
		printf("is not alpha\n");
	str = "He123 World";
	printf("\nCase 2: %s", str);
	if (ft_str_is_alpha(str))
		printf("is alpha\n");
	else
		printf("is not alpha\n");
	str = "";
	printf("\nCase 3: %s", str);
	if (ft_str_is_alpha(str))
		printf("is alpha\n");
	else
		printf("is not alpha\n");
	return (0);
}
