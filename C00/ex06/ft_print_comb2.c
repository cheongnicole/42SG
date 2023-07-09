/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 07:35:47 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/09 08:02:44 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_2_digits(int a)
{
	if (a <= 9)
	{
		write(1, &"0", 1);
		write(1, &"0123456789"[a], 1);
	}
	else
	{
		write(1, &"0123456789"[a / 10], 1);
		write(1, &"0123456789"[a % 10], 1);
	}
}

void	print_pair(int a, int b)
{
	print_2_digits(a);
	write(1, " ", 1);
	print_2_digits(b);
	if (!(a == 98 && b == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_pair(a, b);
			b++;
		}
		a++;
	}
}
