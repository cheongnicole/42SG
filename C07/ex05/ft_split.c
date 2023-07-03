#include <stdio.h>
#include <stdlib.h>

// returns 1 if c is in charset
int is_delimiter(char c, char *charset)
{
	int i = 0;
	while (charset[i] != c)
		i++;
	if (charset[i] == '\0')
		return (0);
	else
		return (1);
} 

// counts number of strings
int	count_strings(char *str, char *charset)
{
	int i = 0;
	int count = 0;
	while (str[i])
	{
		while (str[i] && is_delimiter(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] && !is_delimiter(str[i], charset))
			i++;
	}
	return (count);
}

char *ft_strndup(const char *str, int n)
{
	int i = 0;
	char *result = malloc(n + 1);
	while (str[i] || i <= n)
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0'; 
	return result;
}

char **ft_split(char *str, char *charset)
{
	int i = 0;
	int count = 0;
	int start = 0;
	int end = 0;
	char **strings = (char **)malloc(sizeof(char*) * (count_strings(str, charset) + 1));

	while (str[i])
	{
		while (str[i] && is_delimiter(str[i], charset))
			i++;
		if (str[i] != '\0')
		{
			start = i;
			count++;
		}
		while (str[i] && !is_delimiter(str[i], charset))
			i++;
		end = i;
		strings[count - 1] = ft_strndup(&str[start], end-start);
	}
	strings[count] = malloc(1);	
	return (strings);
}

int main(int argc, char *argv[])
{
	char *str = "Hello World";
	char *charset = " ";
	char **strings;
	strings = ft_split(str, charset);
	int i = 0;
	while (strings[i])
	{
		printf("%s\n", strings[i]);
		i++;
	}
	return (0);	
}