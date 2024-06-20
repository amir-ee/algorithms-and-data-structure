#include <stdio.h>
#include <unistd.h>

int len_z(char *c)
{
    int i = 0;
    while (c[i])
    {
        i++;
    }

    return (i);
}

void ft_strdup(char *src, char *dst)
{
    int pp = 0;
    while (src[pp] != '\0')
    {
        dst[pp] = src[pp];
        pp++;
    }
    dst[pp] = '\0';
}

int main(int ac, char **av)
{

    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    char *bnb = av[1];

    int i = 0, il = len_z(bnb), pp = 0;
    char xz, xc;

    char xrt[il + 1];

    ft_strdup(bnb, xrt);

    // remove space from first
    while (xrt[i] == ' ' || xrt[i] == '\t')
    {
        i++;
    }
    // remove space from last
    il--;
    while (xrt[il] == ' ' || xrt[il] == '\t')
    {
        xrt[il] = '\0';
        il--;
    }

    while (xrt[i] != '\0')
    {
        xz = xrt[i];
        xc = xrt[i + 1];

        if ((xz == ' ' || xz == '\t') && (xc == ' ' || xc == '\t'))
        {
            i++;
            continue;
        }
        else
        {
            write(1, &xrt[i], 1);
        }
        i++;
    }

    write(1, "\n", 1);
    return (0);
}