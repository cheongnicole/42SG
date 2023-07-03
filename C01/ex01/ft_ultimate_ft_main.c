#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
	int number;

	int *nptr1;
	nptr1 = &number;

	int **nptr2;
	nptr2 = &nptr1;

	int ***nptr3;
	nptr3 = &nptr2;

	int ****nptr4;
	nptr4 = &nptr3;

	int *****nptr5;
	nptr5 = &nptr4;

	int ******nptr6;
	nptr6 = &nptr5;

	int *******nptr7;
	nptr7 = &nptr6;

	int ********nptr8;
	nptr8 = &nptr7;

	int *********nptr9;
	nptr9 = &nptr8;

	ft_ultimate_ft(nptr9);
	printf("%d", number);
	return 0;
}
