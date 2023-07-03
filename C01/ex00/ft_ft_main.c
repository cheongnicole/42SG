#include <stdio.h>

void	ft_ft(int *nbr);

int 	main(void)
{
	int	number;

	number = 0;
	ft_ft(&number);
	printf("%d", number);
	return 0;
}
