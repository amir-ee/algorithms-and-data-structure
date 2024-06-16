#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    char *str = argv[1];
    int i = 0;
    int conv;
    char conv_s;

    if (argc !=2)
    {
        write(1, "\n", 1);
        return (0);
    }

    while (str[i] != '\0')
    {
        conv = str[i];
        if (conv >= 65 && conv <= 90)
        {
            if ((str[i] + 13) > 90)
            {
                conv = str[i] - 13;
            }
            else
            {
                conv = str[i] + 13;
            }
        }
        else if (conv >= 97 && conv <= 122)
        {
            if ((str[i] + 13) > 122)
            {
                conv = str[i] - 13;
            }
            else
            {
                conv = str[i] + 13;
            }
        }

        conv_s = conv;
        write(1, &conv_s, 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}