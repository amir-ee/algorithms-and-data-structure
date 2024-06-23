#include <stdio.h>
#include <unistd.h>

int z_atoi(char *n)
{
    int ruse = 0, i = 0, l;

    while (n[i] != '\0')
    {
        l = n[i] - 48;

        ruse = ruse + l;
        ruse = ruse * 10;

        i++;
    }
    ruse /= 10;
    return (ruse);
}

int main(int ac, char **av)
{

    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    char *sr = av[1];

    int x = z_atoi(sr);

    char buf[124];

    int mod, i = 0;

    while (x)
    {

        mod = (x % 16);
        if (mod <= 9 && mod >= 0)
        {
            mod = mod + 48;
        }
        else
        {
            mod = (mod + 97) - 10;
        }
        buf[i] = mod;
        x = x / 16;

        i++;
    }
    buf[i] = '\0';
    //////////
    while (i)
    {
        if (buf[i] != '\0')
        {
            write(1, &buf[i], 1);
        }

        i--;
    }
    write(1, &buf[i], 1);
    write(1, "\n", 1);
}