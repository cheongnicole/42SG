#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a, b, div, mod;
	printf("Enter numerator: ");
	scanf("%d", &a);
	printf("Enter denominator: ");
        scanf("%d", &b);
	printf("%d divided by %d is ", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d mod %d\n", a, b);
	return 0;
}
