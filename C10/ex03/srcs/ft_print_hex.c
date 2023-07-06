/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:23:08 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/06 09:40:50 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_hex_addr(int buf_pos)
{
	int		i;
	char	buffer[8];

	i = 0;
	while (i < 8)
	{
		buffer[i] = \
		"0123456789abcdef"[(buf_pos >> (7 - i) * 4) & 0xf];
		i++;
	}
	write(1, buffer, 8);
}

void	print_hex_contents(char *buffer, unsigned int count)
{
	unsigned int	i;
	unsigned char	*to_print;

	write(1, "  ", 2);
	i = 0;
	while (i < count)
	{
		to_print = (unsigned char *)(buffer + i);
		write(1, &"0123456789abcdef"[*to_print / 16], 1);
		write(1, &"0123456789abcdef"[*to_print % 16], 1);
		write(1, " ", 1);
		i++;
		if ((i % 8) == 0)
			write(1, " ", 1);
	}
	while (i < 16)
	{
		write(1, "   ", 3);
		i++;
		if ((i % 8) == 0)
			write(1, " ", 1);
	}
}

void	print_char_contents(char *buffer, unsigned int count)
{
	unsigned int	i;
	unsigned char	*to_print;

	i = 0;
	write(1, "|", 1);
	while (i < count)
	{
		to_print = (unsigned char *)(buffer + i);
		if (*to_print >= 32 && *to_print <= 126)
			write(1, buffer + i, 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "|", 1);
	write(1, "\n", 1);
}

void	print_and_advance(char *buffer, int bytes_read, int *buf_pos)
{
	print_hex_addr(*buf_pos);
	print_hex_contents(buffer + (*buf_pos), bytes_read);
	print_char_contents(buffer + (*buf_pos), bytes_read);
	*buf_pos += bytes_read;
}

void	print_last_lines(char *buffer, int bytes_read, int *buf_pos)
{
	if (bytes_read)
		print_and_advance(buffer, bytes_read, buf_pos);
	if (*buf_pos)
	{
		print_hex_addr(*buf_pos);
		write(1, "\n", 1);
	}
	else
		print_error("all input file arguments failed", "");
}
