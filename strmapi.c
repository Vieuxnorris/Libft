#include "Libft.h";

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new_str;
	size_t i;
	
	if (*s == '\0')
		return (NULL);
	new_str = ft_strdup((const char *)s);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (new_str[i] != '\0')
	{
		new_str[i] = f((unsigned int)i, new_str[i]);
		i++;
	}
	return (new_str);
}