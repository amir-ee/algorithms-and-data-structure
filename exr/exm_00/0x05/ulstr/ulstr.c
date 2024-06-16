#include <unistd.h>

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    char *str = argv[1];
    int i = 0, x = 0;
    int conv_d;
    char conv_s;

    if(argc == 1)
    {
        write(1, "\n", 1);
        return (0);
    }

    while (str[i] != '\0')
    {
        conv_d = str[i];
        if (conv_d <= 90 && conv_d >= 65)
        {
            conv_d += 32;
            conv_s = conv_d;

            str[i] = conv_s;
        }
        else if (conv_d <= 122 && conv_d >= 97)
        {
            conv_d -= 32;
            conv_s = conv_d;

            str[i] = conv_s;
        }

        i++;
    }

    while (str[x] != '\0')
    {
        write(1, &str[x], 1);
        x++;
    }
    write(1, "\n", 1);
    return (0);
}