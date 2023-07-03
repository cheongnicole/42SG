#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int tab[5] = {1, 2, 3, 4, 5};	
	printf("%d %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	ft_rev_int_tab(tab, 5);
	printf("%d %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return 0;
}
