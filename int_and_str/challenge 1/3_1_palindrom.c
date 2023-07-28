#include <stdio.h> // eazy way
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
        int ls = pal2 % 10;
        *ram = ls;
        pal2 /= 10;
        if (c == i + 1)
        {
            break;
        }
        ram++;
    }

    ram = bgn_addres;

    int y = c;
    for (int i = 0; i < half; i++)
    {
        int n1 = *(ram + i);
        int n2 = *(ram + (c - 1));
        if (n1 == n2)
        {
        }
        else
        {
            printf("this num %d is not palindrom", pal);
            return 1;
        }
        c--;
    }
    printf("this num %d is palindrom", pal);

    return 0;
}