/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 23:05:05 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/29 09:36:48 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

//int	main(int argc, char *argv[])
int	main(void)
{
	/*
	if (argc == 2)
		printf("%d\n", ft_atoi(argv[1]));
		*/
	//printf("%d\n", ft_atoi("   ---+--+1234ab567"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", ft_atoi("123"));
	return (0);
}
