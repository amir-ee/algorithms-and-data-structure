#include <stdio.h>
#include <unistd.h>

int len_z(char *sr)
{
    int i = 0;
    while (sr[i] != '\0')
    {
        i++;
    }
    return (i);
}

int check_if_src_in_dst(char *src, char *dst)
{
    int i = 0, i2 = 0, chk = 0;

    while (src[i] != '\0')
    {
        // i2 = 0;
        while (dst[i2] != '\0')
        {
            if (src[i] == dst[i2])
            {
                chk++;
                i2++;
                break;
            }
            i2++;
        }
        i++;
    }
    return (chk);
}

int main(int ac, char **av)
{
    char *x1 = av[1];
    char *x2 = av[2];

    int i = 0, i2 = 0;

    if (ac != 3)
    {
        write(1, "\n", 1);
        return (0);
    }

    int len_x1 = len_z(x1);

    int chk = check_if_src_in_dst(x1, x2);

    if (len_x1 != chk)
    {
        write(1, "\n", 1);
        return (0);
    }

    while (x1[i] != '\0')
    {
        // i2 = 0;
        while (x2[i2] != '\0')
        {
            if (x1[i] == x2[i2])
            {
                write(1, &x2[i2], 1);
                i2++;
                break;
            }
            i2++;
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}

// faya
// fqwajyua