/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:55:42 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/08 19:48:13 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

// ft_tail mimics tail command
// only to be invoked with -c option

void	print_header(char *header, int *first)
{
	if (*first)
		write(1, "\n", 1);
	(*first)++;
	ft_putstr("==> ");
	if (ft_strcmp(header, "-") == 0)
		ft_putstr("standard input");
	else
		ft_putstr(header);
	ft_putstr(" <==\n");
}

void	print_tail(int fd, int count)
{
	char	*buf;
	int		size;

	buf = (char *)malloc(2147483647);
	size = read(fd, buf, 2147483647);
	if (size < count)
		write(1, buf, size);
	else
		write(1, buf + size - count, count);
	free(buf);
}

void	ft_tail(int argc, char **argv, int count)
{
	int		fd;
	int		i;
	int		j;

	i = 3;
	j = 0;
	while (i < argc)
	{
		if (argv[i][0] == '-')
			fd = 0;
		else
			fd = open(argv[i], O_RDONLY);
		if (fd < 0)
		{
			output_error(errno, argv[i]);
			i++;
			continue ;
		}
		if (argc > 4)
			print_header(argv[i], &j);
		print_tail(fd, count);
		close(fd);
		i++;
	}
}	

int	main(int argc, char **argv)
{
	int		count;
	int		fd;
	int		i;
	int		j;

	if (argc >= 3)
	{
		count = ft_atoi(argv[2]);
		if (!count)
			return (0);
		if (argc == 3)
			print_tail(0, count);
		else
			ft_tail(argc, argv, count);
	}
	return (0);
}
