#include <unistd.h>

int main()
{
    int upr = 65;
    int low = 97;
    char conv;

    while (upr != 91)
    {

        if ((low % 2) == 1)
        {
            conv = low;
            write(1, &conv, 1);
            low++;
            upr++;
        }
        else
        {
            conv = upr;
            write(1, &conv, 1);
            upr++;
            low++;
        }
    }
    write(1, "\n", 1);
    return (0);
}