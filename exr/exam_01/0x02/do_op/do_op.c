#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    (void)ac;
    (void)av;

    if (ac != 4)
    {
        write(1, "\n", 1);
        return (0);
    }

    int x1 = atoi(av[1]);
    int x2 = atoi(av[3]);
    int op = av[2][0];

    int rus;

    if (op == '+')
    {
        rus = x1 + x2;
        printf("%d\n", rus);
    }
    else if (op == '*')
    {
        rus = x1 * x2;
        printf("%d\n", rus);
    }
    else if (op == '/')
    {
        rus = x1 / x2;
        printf("%d\n", rus);
    }
    else if (op == '-')
    {
        rus = x1 - x2;
        printf("%d\n", rus);
    }
    else if (op == '%')
    {
        rus = x1 % x2;
        printf("%d\n", rus);
    }
    return (0);
}