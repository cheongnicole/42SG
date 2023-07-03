#include <stdio.h>

void ft_swap(int *a, int *b);

int	main(void)
{
	int a=13, b=37;
	printf("before: %d %d\n", a, b);
	ft_swap (&a, &b);
	printf("after: %d %d\n", a, b);
	
	return 0;
}
