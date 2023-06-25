/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 08:34:05 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/25 15:20:06 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

// ft_putline() prints a line of 'num' characters using start, middle, end
// It calls ft_putchar()
// e.g. ft_putline(5, 'A', 'B', 'C') writes ABBBC

void	ft_putline(int num, char start, char middle, char end)
{
	int	i;

	i = 1;
	ft_putchar(start);
	while (i < num - 1)
	{
		ft_putchar(middle);
		i++;
	}
	if (num > 1)
		ft_putchar(end);
	ft_putchar('\n');
}

// rush() draws a rectangle of width x and height y using the characters given
// by the subject. It has size check to make sure the rectangle fits on default
// terminal size of 80 x 24.
// e.g. rush(5, 3) draws
// ABBBC
// B   B
// CBBBA
void	rush(int x, int y)
{
	int	current_line;

	if (x < 1 || y < 1 || x > 80 || y > 24)
		return ;
	current_line = 1;
	while (current_line <= y)
	{
		if (current_line == 1)
			ft_putline(x, 'A', 'B', 'C');
		else if (current_line == y)
			ft_putline(x, 'C', 'B', 'A');
		else
			ft_putline(x, 'B', ' ', 'B');
		current_line++;
	}
}
