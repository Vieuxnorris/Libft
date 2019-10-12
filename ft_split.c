#include "Libft.h"

static size_t ft_count_words(char *str, char c)
{
	size_t nb_words;
	
	while (*str && *str == c)
		str++;
	nb_words = (*str ? 1 : 0);
	while (*str)
	{
		if (*str == c && str[1] && str[1] != c)
			nb_words++;
		str++;
	}
	return (nb_words);
}

char **ft_split(char const *s, char c)
{
	size_t nb_words;
	char *wrd_begin;
	char **result;
	
	if (s == NULL)
		return (NULL);
	nb_words = ft_count_words((char *)s,c);
	result = (char **)malloc(sizeof(char *) * (nb_words + 1));
	if (result == NULL)
		return (NULL);
	wrd_begin = (char *)s;
	while (*s)
	{
		if (*s == c)
		{
			if (wrd_begin != s)
				*(result++) = ft_substr(wrd_begin, 0, s - wrd_begin);
			wrd_begin = (char *)s + 1;
		}
		s++;
	}
	if (wrd_begin != s)
		*(result++) = ft_substr(wrd_begin, 0, s - wrd_begin);
	*result = NULL;
	return (result - nb_words);
}