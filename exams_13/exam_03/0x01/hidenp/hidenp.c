#include <unistd.h>

int main(int ac, char **av)
{
    if (ac != 3)
    {
        write(1, "\n", 1);
        return (0);
    }

    char *sr1 = av[1];
    char *sr2 = av[2];

    int i = 0, i2 = 0;
    int bol = 0;

    while (sr1[i] != '\0')
    {
        bol = 0;
        while (sr2[i2] != '0')
        {
            if (sr1[i] == sr2[i2])
            {
                bol = 1;
                break;
            }

            i2++;
        }
        if (bol != 1)
        {
            write(1, "0", 1);
            write(1, "\n", 1);
            return (0);
        }

        i++;
    }
    write(1, "1", 1);
    write(1, "\n", 1);
    return (0);
}