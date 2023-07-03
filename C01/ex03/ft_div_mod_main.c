#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a, b, div, mod;
	printf("Enter numerator: ");
	scanf("%d", &a);
	printf("Enter denominator: ");
        scanf("%d", &b);
	ft_div_mod(a, b, &div, &mod);
	printf("%d divided by %d is %d mod %d\n", a, b, div, mod);
	return 0;
}
