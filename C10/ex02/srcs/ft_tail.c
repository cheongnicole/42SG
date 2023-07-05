/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:55:42 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/05 18:10:48 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

// ft_tail mimics tail command
// only to be invoked with -c option
// With no FILE, or when FILE is -, read standard input

// returns number of bytes to read if valid
int	check_args(int argc, char **argv)
{
	int	bytes;

	if (argc < 4)
	{
		print_error("invalid number of arguments", "");
		return (0);
	}
	if (ft_strcmp(argv[1], "-c") != 0)
	{
		print_error("invalid option", argv[1]);
		return (0);
	}
	bytes = ft_atoi(argv[2]);
	if (bytes <= 0)
	{
		print_error("invalid number of bytes", argv[2]);
		return (0);
	}
	return (bytes);
}

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

void	print_tail(int bytes, char *filename)
{
	int		fd;
	int		start;
	int		end;
	char	*buffer;

	while (ft_strcmp(filename, "-") == 0)
		read_std_input();
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		output_error(errno, filename);
	else
	{
		end = file_size(filename);
		start = end - bytes;
		buffer = (char *)malloc(start);
		read(fd, buffer, start);
		free(buffer);
		buffer = (char *)malloc(bytes);
		read(fd, buffer, bytes);
		write(1, buffer, bytes);
		free(buffer);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	int	i;
	int	bytes;

	bytes = check_args(argc, argv);
	if (!(bytes))
		return (0);
	i = 3;
	while (i < argc)
	{
		if (argc > 4)
			print_header(argv[i]);
		print_tail(bytes, argv[i]);
		i++;
	}
	return (0);
}
