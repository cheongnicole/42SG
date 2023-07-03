#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int main(void)
{
	char str[100];
	int len=0;
	printf("Enter string to check:\n");
	fgets(str, 99, stdin);
	len = ft_strlen(str);
	printf("Length of string: %d", len);
	return 0;
}
