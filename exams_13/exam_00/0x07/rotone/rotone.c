#include <unistd.h>

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    char *str = argv[1];
    int i = 0;
    int conv_d;
    char conv_s;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    while (str[i] != '\0')
    {
        conv_d = str[i];
        if (conv_d == 122)
        {
            conv_d = 97;
        }
        else if (conv_d == 90)
        {
            conv_d = 65;
        }
        else if ((conv_d >= 97 && conv_d <= 122) || (conv_d >= 65 && conv_d <= 90))
        {
            conv_d++;
        }
        conv_s = conv_d;

        write(1, &conv_s, 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}