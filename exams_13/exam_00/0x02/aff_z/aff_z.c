#include <unistd.h>

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    char *str = argv[1];
    int i = 0;

    if (argc == 1)
    {
        write(1, "z", 1);
        write(1, "\n", 1);
        return (0);
    }

    while (str[i] != '\0')
    {
        if (str[i] == 'z')
        {
            write(1, "z", 1);
            write(1, "\n", 1);
            return (0);
        }
        i++;
    }

    write(1, "z", 1);
    write(1, "\n", 1);
    return (0);
}