/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:55:42 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/06 16:36:02 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

// ft_tail mimics tail command
// only to be invoked with -c option

void	print_header(char *header)
{
	ft_putstr("==> ");
	if (ft_strcmp(header, "-") == 0)
		ft_putstr("standard input");
	else
		ft_putstr(header);
	ft_putstr(" <==\n");
}

int	file_size(char *filename)
{
	int		i;
	int		fd;
	char	c;

	fd = open(filename, O_RDONLY);
	i = 0;
	while (read(fd, &c, 1))
		i++;
	close(fd);
	return (i);
}

void	print_tail(int fd, int bytes, char *filename)
{
	int		start;
	int		end;
	char	*buffer;

	end = file_size(filename);
	if (end < bytes)
	{
		start = 0;
		bytes = end;
	}
	else
		start = end - bytes;
	buffer = (char *)malloc(start);
	read(fd, buffer, start);
	free(buffer);
	buffer = (char *)malloc(bytes);
	read(fd, buffer, bytes);
	write(1, buffer, bytes);
	free(buffer);
}

int	main(int argc, char **argv)
{
	int	i;
	int	fd;
	int	bytes;

	bytes = ft_atoi(argv[2]);
	if (bytes == 0)
		return (0);
	i = 3;
	while (i < argc)
	{
		if (argc > 4)
			print_header(argv[i]);
		fd = open(argv[i], O_RDONLY);
		if (fd < 0)
		{
			output_error(errno, argv[i]);
			break ;
		}
		print_tail(fd, bytes, argv[i]);
		close(fd);
		i++;
		if (i != argc)
			write(1, "\n", 1);
	}
	return (0);
}
