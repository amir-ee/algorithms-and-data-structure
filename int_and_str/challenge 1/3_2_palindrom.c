#include <stdio.h> // hard way
#include <stdlib.h>

int main()
{
    int pal = 12021;
    int pal1 = pal;
    int pal2 = pal;
    int c = 0;

    for (; pal1 != 0;)
    {
        pal1 /= 10;
        c++;
    }

    int *ram = malloc(c * 4);
    int *bgn_addres = ram;
    int *end_addres = ram + (c - 1);

    int half = c / 2;

    for (int i = 0; i < c; i++)
    {
        int v = pal2 % 10;
        *ram = v;
        pal2 /= 10;
        if (pal2 == 0)
        {
            break;
        }
        ram++;
    }

    ram = bgn_addres;

    int *ram1 = malloc(half * 4);
    int *bgn_addres1 = ram1;

    for (int i = 0; i < half; i++)
    {
        *ram1 = *ram;
        if (half - 1 == i)
        {
            break;
        }
        ram++;
        ram1++;
    }

    int *ram2 = malloc(half * 4);
    int *bgn_addres2 = ram2;

    ram = end_addres;
    for (int i = 0; i < half; i++)
    {
        *ram2 = *ram;
        if (half == i + 1)
        {
            break;
        }
        ram--;
        ram2++;
        c--;
    }

    ram1 = bgn_addres1;
    ram2 = bgn_addres2;

    int x = 0;

    for (int i = 0; i < half; i++)
    {
        int n1 = *ram1;
        int n2 = *ram2;
        if (n1 == n2)
        {
            x++;
        }
        else
        {
            printf("the num %d is not palindrom\n", pal);
            return 1;
        }
        if (i + 1 == half)
        {
            break;
        }
        ram1++;
        ram2++;
    }
    printf("the num %d is a palindrom\n", pal);

    ram = bgn_addres;
    ram1 = bgn_addres1;
    ram2 = bgn_addres2;
    free(ram);
    free(ram1);
    free(ram2);
    return 0;
}