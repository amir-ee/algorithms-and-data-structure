#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac != 3)
    {
        printf("\n");
        return (0);
    }
    char *sr1 = av[1];
    char *sr2 = av[2];


    int x1 = atoi(sr1);
    int x2 = atoi(sr2);

    int boo, i = 1, z, y, trc = 0;

    if (x1 > x2)
    {
        boo = x2;
    }
    else
    {
        boo = x1;
    }

    int buf[boo];
    /////////////////

    while (boo > i)
    {
        z = x1 % i;
        y = x2 % i;

        if (z == 0 && y == 0)
        {
            buf[trc] = i;
            trc++;
        }
        i++;
    }
    buf[trc] = 0;

    ///////////////
    int lp = 0;

    while (buf[lp] != 0)
    {
        if (buf[lp + 1] == 0)
        {
            printf("%d\n", buf[lp]);
            return (0);
        }
        lp++;
    }
}