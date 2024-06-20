#include <unistd.h>

int is_float(float n)
{
    int b = n;

    if (b != n)
    {
        return (1);
    }
    return (0);
}

int if_fizz_buzz(int n)
{
    float x, y, z;

    x = (float)n / 3;
    y = (float)n / 5;

    if (is_float(x))
    {
        if (is_float(y))
        {
            return (0);
        }
        else
        {
            return (5);
        }
    }
    else
    {
        if (is_float(y) != 1)
        {
            return (35);
        }
        return (3);
    }
}

void pr_fizz()
{
    char *x = "fizz";
    int i = 0;

    while (x[i] != '\0')
    {
        write(1, &x[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

void pr_buzz()
{
    char *x = "buzz";
    int i = 0;

    while (x[i] != '\0')
    {
        write(1, &x[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

void pr_fizzbuzz()
{
    char *x = "fizzbuzz";
    int i = 0;

    while (x[i] != '\0')
    {
        write(1, &x[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

void itoa(int n)
{
    int cp = n, mod, i = 0;

    mod = (cp % 10) + 48;
    cp = (cp / 10) + 48;

    write(1, &cp, 1);
    write(1, &mod, 1);
    write(1, "\n", 1);
}

int main()
{
    int i = 0, chk;
    char conv_s;
    i++;

    while (i != 101)
    {
        chk = if_fizz_buzz(i);
        conv_s = i + 48;

        if (chk == 3)
        {
            pr_fizz();
        }
        else if (chk == 5)
        {
            pr_buzz();
        }
        else if (chk == 35)
        {
            pr_fizzbuzz();
        }
        else
        {
            if (i > 10)
            {
                itoa(i);
            }
            else
            {
                write(1, &conv_s, 1);
                write(1, "\n", 1);
            }
        }

        i++;
    }
}