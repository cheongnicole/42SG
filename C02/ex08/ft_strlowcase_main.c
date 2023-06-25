/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:24:13 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/25 19:53:58 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[128];

	strcpy(str, "Hello World");
	printf("\nCase 1: B4 %s", str);
	printf(" After %s\n", ft_strlowcase(str));
	strcpy(str, "He123 W@#$d");
	printf("\nCase 2: B4 %s", str);
	printf(" After %s\n", ft_strlowcase(str));
	strcpy(str, "");
	printf("\nCase 3: B4 %s", str);
	printf(" After %s\n", ft_strlowcase(str));
	return (0);
}
