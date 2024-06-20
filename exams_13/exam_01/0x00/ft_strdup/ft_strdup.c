#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i = 0, x = 0;

    while (src[i] != '\0')
    {
        i++;
    }

    char *ptr = (char *)malloc((i + 1) * sizeof(src));

    if (ptr == NULL)
    {
        return (NULL);
    }

    while (src[x] != '\0')
    {
        ptr[x] = src[x];
        x++;
    }
    ptr[x] = '\0';

    return (ptr);
}