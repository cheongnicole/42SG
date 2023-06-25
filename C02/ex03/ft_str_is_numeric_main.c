/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric_main.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:46:10 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/25 18:51:31 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*str;

	str = "1209345";
	printf("\nCase 1: %s", str);
	if (ft_str_is_numeric(str))
		printf("is numeric\n");
	else
		printf("is not numeric\n");
	str = "He1lo World";
	printf("\nCase 2: %s", str);
	if (ft_str_is_numeric(str))
		printf("is numeric\n");
	else
		printf("is not numeric\n");
	str = "";
	printf("\nCase 3: %s", str);
	if (ft_str_is_numeric(str))
		printf("is numeric\n");
	else
		printf("is not numeric\n");
	return (0);
}
