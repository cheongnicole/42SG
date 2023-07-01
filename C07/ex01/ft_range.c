#include <stddef.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	dest = (int *)malloc((max - min) * sizeof(int));
	if (dest)
	{
		while (i != (max - min))
		{
			dest[i] = min + i;
			i++;
		}
	}
	return (dest);
}
