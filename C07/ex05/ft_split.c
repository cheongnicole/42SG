/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:01:07 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/04 11:44:10 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// returns 1 if c is in charset
int	is_delimiter(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] && charset[i] != c)
		i++;
	if (charset[i] == '\0')
		return (0);
	else
		return (1);
}

// counts number of strings
int	count_strings(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
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

// counts string length until encounters delimiter
int	ft_strlen_delim(const char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_delimiter(str[i], charset))
			i++;
		else
			break ;
	}
	return (i);
}

// malloc and dups the word found
char	*ft_dup_word(const char *str, char *charset)
{
	int		i;
	char	*result;
	int		word_len;

	i = 0;
	word_len = ft_strlen_delim(str, charset);
	result = (char *)malloc(word_len + 1);
	while (i < word_len)
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

// scans the string and calls ft_dup_word to extract the words
// discarding the delimiters
char	**ft_split(char *str, char *charset)
{
	int		i;
	int		count;
	char	**strings;

	i = 0;
	count = 0;
	strings = (char **)malloc(sizeof(char *) * \
					(count_strings(str, charset) + 1));
	while (str[i])
	{
		while (str[i] && is_delimiter(str[i], charset))
			i++;
		if (str[i] != '\0')
		{
			strings[count] = ft_dup_word(&str[i], charset);
			count++;
		}
		while (str[i] && !is_delimiter(str[i], charset))
			i++;
	}
	strings[count] = NULL;
	return (strings);
}
