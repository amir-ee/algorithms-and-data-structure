#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    char *str = av[1];

    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    int i = 0, it, i2 = 0;
    char buf[1024];

    while (str[i] != '\0')
    {
        it = str[i];
        if (it <= 90 && it >= 65)
        {
            buf[i] = ('Z' - (str[i] - 'A'));
        }
        else if (it >= 97 && it <= 122)
        {
            buf[i] = ('z' - (str[i] - 'a'));
        }
        else
        {
            buf[i] = str[i];
        }
        i++;
    }
    buf[i] = '\0';

    while (buf[i2] != '\0')
    {
        write(1, &buf[i2], 1);
        i2++;
    }
    write(1, "\n", 1);
}