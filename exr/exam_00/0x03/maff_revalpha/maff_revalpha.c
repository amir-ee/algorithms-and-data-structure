#include <unistd.h>

int main()
{
    int lower = 122;
    int upper = 90;
    char conv;

    while (lower != 96)
    {
        if ((lower % 2) == 0)
        {
            conv = lower;
            write(1, &conv, 1);
            lower--;
            upper--;
        }
        else
        {
            conv = upper;
            write(1, &conv, 1);
            lower--;
            upper--;
        }
    }
    write(1, "\n", 1);
    return (0);
}