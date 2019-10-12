#include "Libft.h"
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
	int i;
	
	i = 0;
	while (*s != '\0' && s + i != NULL)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}