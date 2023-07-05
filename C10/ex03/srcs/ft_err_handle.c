/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_err_handle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 22:23:32 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/05 22:25:23 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	output_error(int err, char *filename)
{
	if (!err)
		return ;
	write(2, "hexdump: ", 9);
	write(2, filename, ft_strlen(filename));
	write(2, ": ", 2);
	write(2, strerror(err), ft_strlen(strerror(err)));
	write(2, "\n", 1);
}

void	print_error(char *err_desc, char *err_arg)
{
	write(2, "hexdump: ", 9);
	write(2, err_desc, ft_strlen(err_desc));
	write(2, ": ", 2);
	write(2, err_arg, ft_strlen(err_arg));
	write(2, "\n", 1);
}

// returns number of bytes to read if valid
int	check_args(int argc, char **argv)
{
	if (argc < 3)
	{
		print_error("invalid number of arguments", "");
		return (0);
	}
	if (ft_strcmp(argv[1], "-C") != 0)
	{
		print_error("invalid option", argv[1]);
		return (0);
	}
	return (1);
}

int	file_size(char *filename)
{
	int		i;
	int		fd;
	char	c;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	i = 0;
	while (read(fd, &c, 1))
		i++;
	close(fd);
	return (i);
}

