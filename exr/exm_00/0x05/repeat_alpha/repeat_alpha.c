#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    char *str = argv[1];
    int conv_d;
    int i = 0, b;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    while (str[i] != '\0')
    {
        conv_d = str[i];

        if (conv_d >= 97 && conv_d <= 122)
        {
            int conk = conv_d - 96;
            b = 0;

            while (b < conk)
            {
                write(1, &str[i], 1);
                b++;
            }
        }
        else if (conv_d >= 65 && conv_d <= 90)
        {
            int conk = conv_d - 64;
            b = 0;

            while (b < conk)
            {
                write(1, &str[i], 1);
                b++;
            }
        }
        else
        {
            write(1, &str[i], 1);
        }

        i++;
    }
    write(1, "\n", 1);
    return (0);
}