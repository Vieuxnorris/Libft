#include "Libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    long length;
    size_t index;
    char *copie;
    
    if (*s == '\0' || len < 0)
        return (NULL);
    length = len - start;
    copie = (char *)malloc(len + 1);
    if (copie == NULL)
        return (NULL);
    index = 0;
    while (index < start)
        if (*s != '\0')
            index++;
    if (index != start)
        return (NULL);
    index = 0;
    while (index < len)
    {
        *(copie + index) = *(s + start);
        index++;
        start++;
    }
    copie[index] = '\0';
    return (copie);
}