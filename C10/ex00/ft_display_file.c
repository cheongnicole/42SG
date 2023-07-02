#include <unistd.h>
#include <fcntl.h>

int	fd_display_file(char *filename)
{
	int	fd;
	char	a;
	int	r;
       
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	while ((r = read(fd, &a, 1)))
	{
		if (r == -1)
			return (0);
		write(1, &a, 1);
	}
	close(fd);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else if (!fd_display_file(argv[1]))
		write(2, "Cannot read file.\n", 18);
	return (0);
}
