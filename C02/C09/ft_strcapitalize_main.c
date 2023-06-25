/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize_main.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:04:10 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/25 20:53:12 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[128];

	strcpy(str, "hello world");
	printf("\nCase 1: B4 %s", str);
	printf(" After %s\n", ft_strcapitalize(str));
	strcpy(str, "salut, comment tu vas ? 42mots quarante-deux; ");
	strcat(str, "cinquante+et+un");
	printf("\nCase 2: B4 %s", str);
	printf(" After %s\n", ft_strcapitalize(str));
	strcpy(str, "");
	printf("\nCase 3: B4 %s", str);
	printf(" After %s\n", ft_strcapitalize(str));
	return (0);
}
