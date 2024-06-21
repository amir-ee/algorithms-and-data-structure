#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int a, z, i = 0;
    a = start;
    z = end;

    while (a <= z)
    {
        i++;
        a++;
    }

    int *buf = malloc(i * 4);

    int cp_i = i,
        c = 0;

    while (cp_i)
    {
        buf[c] = end;
        end--;
        c++;
        cp_i--;
    }
    return (buf);
}
