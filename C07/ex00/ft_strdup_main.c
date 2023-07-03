#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main (void)
{
	char *dest;
	printf("%s \n", strdup("Hello World!"));
	dest = ft_strdup("Hello World!");
	printf("%s \n", dest);
	free(dest);
	// printf("%s \n", ft_strdup("Hello World!"));
	return (0);
}
