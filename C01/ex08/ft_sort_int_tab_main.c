#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int tab[6] = { 53,400,2,37,1,44 };
	printf("%d %d %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	ft_sort_int_tab(tab, 6);
	printf("%d %d %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return 0;
}
