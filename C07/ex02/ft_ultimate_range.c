#include <stddef.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*dest;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}
	dest = (int *)malloc((max - min) * sizeof(int));
	if (dest)
	{
		while (i != (max - min))
		{
			dest[i] = min + i;
			i++;
		}
	}
	*range = dest;
	return (i);
}
