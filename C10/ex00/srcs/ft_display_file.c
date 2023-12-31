/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:10:29 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/05 16:10:32 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	c;

	if (argc == 1)
		return (write(2, "File name missing.\n", 19));
	else if (argc > 2)
		return (write(2, "Too many arguments.\n", 20));
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			return (write(2, "Cannot read file.\n", 18));
		while (read(fd, &c, 1))
			write(1, &c, 1);
	}
	close(fd);
	return (0);
}
