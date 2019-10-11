#include "Libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t count;
    char *join;
    
    count = 0;
    join = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
    if (join == NULL)
        return (NULL);
    while (*s1 != '\0')
    {
        *join = *s1;
        join++;
        s1++;
        count++;
    }
    while (*s2 != '\0')
    {
        *join = *s2;
        join++;
        s2++;
        count++;
    }
    *join = '\0';
    return (join - count);
}