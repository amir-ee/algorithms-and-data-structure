#include <stdio.h> // revers num
#include <stdlib.h>

int main()
{
    int x = 123;
    int x1 = x;
    int x2 = x;
    int c = 0;

    for (; x1 != 0;)
    {
        x1 /= 10;
        c++;
    }

    int *ram = malloc(c * 4);

    c--;
    for (int i = 0; i < c + 1; i++)
    {
        int v = x2 % 10;
        *(ram + i) = v;
        x2 /= 10;
    }

    for (int i = 0; i < c + 1; i++)
    {
        printf("%d ", *(ram + i));
    }
    printf("\n");

    free(ram);
    return 0;
}