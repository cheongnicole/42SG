/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial_main.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 02:58:18 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/29 03:50:01 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("Factorial of -1 is 0: %d\n", ft_recursive_factorial(-1));
	printf("Factorial of 0 is 1: %d\n", ft_recursive_factorial(0));
	printf("Factorial of 1 is 1: %d\n", ft_recursive_factorial(1));
	printf("Factorial of 2 is 2: %d\n", ft_recursive_factorial(2));
	printf("Factorial of 3 is 6: %d\n", ft_recursive_factorial(3));
	printf("Factorial of 4 is 24: %d\n", ft_recursive_factorial(4));
	printf("Factorial of 5 is 120: %d\n", ft_recursive_factorial(5));
	return (0);
}
