/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:23:08 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/05 22:34:01 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

// ft_hexdump mimics hexdump command
// only to be invoked with -C option

char	*create_buffer(int argc, char **argv)
{
	int		i;
	int		size;
	char	*buffer;

	i = 2;
	size = 0;
	while (i < argc)
	{
		size += file_size(argv[i]);
		i++;
	}
	buffer = (char *)malloc(size);
	return (buffer);
}

void	hexdump(int argc, char **argv, char *buffer)
{
	int	i;
	int	fd;
	int	b_read;
	int	b_pos;

	i = 1;
	b_pos = 0;
	b_read = 0;
	while (++i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd < 0)
			output_error(errno, argv[i]);
		else
		{
			b_read += read(fd, buffer + b_pos + b_read, 16 - b_read);
			while (b_read == 16)
			{
				print_and_advance(buffer, b_read, &b_pos);
				b_read = read(fd, buffer + b_pos, 16);
			}
		}
		close(fd);
	}
	print_last_lines(buffer, b_read, &b_pos);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*buffer;

	if (!check_args(argc, argv))
		return (0);
	buffer = create_buffer(argc, argv);
	if (!buffer)
		return (0);
	hexdump(argc, argv, buffer);
	free(buffer);
	return (0);
}
