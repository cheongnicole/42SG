/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 10:31:24 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/26 14:07:55 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex_addr(void *p)
{
	unsigned long int	x;
	unsigned int		i;
	char				buffer[2 + sizeof(x) * 2];

	i = 0;
	x = (unsigned long int)p;
	while (i < sizeof(x) * 2)
	{
		buffer[i] = \
			"0123456789abcdef"[(x >> ((sizeof(x) * 2 - 1 - i) * 4)) & 0xf];
		i++;
	}
	buffer[i] = ':';
	buffer[i + 1] = ' ';
	write(1, buffer, 18);
}

void	ft_print_hex_contents(void *p, unsigned int count)
{
	unsigned int	i;
	char			*to_print;

	i = 0;
	while (i < count)
	{
		to_print = p + i;
		write(1, &"0123456789abcdef"[*to_print / 16], 1);
		write(1, &"0123456789abcdef"[*to_print % 16], 1);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	ft_print_char_contents(void *p, unsigned int count)
{
	unsigned int	i;
	char			*to_print;

	i = 0;
	while (i < count)
	{
		to_print = p + i;
		if (*to_print >= 32 && *to_print <= 126)
			write(1, p + i, 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	row;

	i = 0;
	row = size / 16;
	while (i < size)
	{
		ft_print_hex_addr(addr + i);
		if (row)
			ft_print_hex_contents(addr + i, 16);
		else
			ft_print_hex_contents(addr + i, size % 16);
		if (row)
			ft_print_char_contents(addr + i, 16);
		else
			ft_print_char_contents(addr + i, size % 16);
		i += 16;
		row--;
	}
	return (addr);
}
