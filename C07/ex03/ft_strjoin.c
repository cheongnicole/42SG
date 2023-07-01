#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_strncpy(char *dest, char *src, int nb)
{
	int	i;

	i = 0;
	while (i < nb)
	{
		dest[i] = src[i];
		i++;
	}
}

char	*malloc_empty_str(void)
{
	char	*dest;

	dest = malloc(1);
	dest[0] = '\0';
	return (dest);
}

char	*malloc_joined_str(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	int		sep_len;
	char	*dest;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	sep_len = ft_strlen(sep);
	len += ((size - 1) * sep_len) + 1;
	dest = (char *)malloc(len);
	dest[len - 1] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		curr_str_len;
	int		sep_len;
	int		len;

	if (size <= 0)
		return (malloc_empty_str());
	dest = malloc_joined_str(size, strs, sep);
	sep_len = ft_strlen(sep);
	i = 0;
	len = 0;
	while (i < size)
	{
		curr_str_len = ft_strlen(strs[i]);
		ft_strncpy(dest + len, strs[i], curr_str_len);
		len += curr_str_len;
		if (i != size - 1)
		{
			ft_strncpy(dest + len, sep, sep_len);
			len += sep_len;
		}
		i++;
	}
	return (dest);
}
