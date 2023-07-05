#include "ft.h"

// ft_cat mimics cat command
// With no FILE, or when FILE is -, read standard input

void	read_std_input(char *buffer)
{
	int	i;
	char	c;

	i = 0;
	while (read(0, &c, 1))
	{
		if (c == '\n')
			break;
		buffer[i] = c;
		i++;
	}
	buffer[i] = '\n';
	buffer[i + 1] = '\0';
	ft_putstr(buffer);
}

void	output_error(int err, char *filename)
{
	if (!err)
		return;
	write(2, "cat: ", 5);
	write(2, filename, ft_strlen(filename));
	write(2, ": ", 2);
	write(2, strerror(err), ft_strlen(strerror(err)));
	write(2, "\n", 1);
}

int	main(int argc, char **argv)
{
	char	buffer[30000];
	int	i;
	int	fd;
	int	count;

	while (argc == 1)
		read_std_input(buffer);
	i = 0;
	while (++i < argc)
	{
		while (ft_strcmp(argv[i], "-") == 0)
			read_std_input(buffer);
		fd = open(argv[i], O_RDONLY);
		if (fd < 0)
			output_error(errno, argv[i]);
		else
		{
			while ((count = read(fd, buffer, 30000)))
				write(1, buffer, count);
		}
		close(fd);
	}
	return (0);
}
