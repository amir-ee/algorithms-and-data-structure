#include <unistd.h>

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    char *string = argv[1];
    char xs = argv[2][0];
    char xd = argv[3][0];

    if (argc != 4)
    {
        write(1, "\n", 1);
        return (0);
    }

    if (argv[3][1] != '\0' || argv[2][1] != '\0')
    {
        write(1, "\n", 1);
        return (0);
    }

    int i = 0,
        x = 0;

    while (string[i] != '\0')
    {
        if (string[i] == xs)
        {
            string[i] = xd;
        }
        i++;
    }
    while (string[x] != '\0')
    {
        write(1, &string[x], 1);
        x++;
    }
    write(1, "\n", 1);
    return (0);
}