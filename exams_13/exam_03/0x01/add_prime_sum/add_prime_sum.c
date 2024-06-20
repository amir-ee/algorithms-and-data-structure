#include <unistd.h>
#include <stdio.h>
int isfloat(float n)
{
    int n_t = n;

    if (n != n_t)
    {
        return (1);
    }
    return (0);
}

int is_prime(int n)
{
    float a, b, c;
    int z = 0, y = 0, x;

    if (n % 2 == 0)
    {
        return (1);
    }

    a = (float)n / 3;
    if (isfloat(a) != 1)
    {
        return (1);
    }
    b = (float)n / 5;
    if (isfloat(b) != 1)
    {
        return (1);
    }
    c = (float)n / 7;
    if (isfloat(c) != 1)
    {
        return (1);
    }
    return (0);
}

int main(int ac, char **av)
{

    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    int num = av[1][0] - 48;
    // int num = 7;

    int cp_nm = num;

    int sum_prime = 0, i = 2;
    num++;

    while ((num) > i)
    {
        if (i == 2 || i == 3 || 5 == i || i == 7)
        {
            sum_prime = sum_prime + i;
        }
        else if (is_prime(i) == 0)
        {
            sum_prime = sum_prime + i;
        }

        i++;
    }

    printf("%d\n", sum_prime);
}

// 2 3 5 7 11