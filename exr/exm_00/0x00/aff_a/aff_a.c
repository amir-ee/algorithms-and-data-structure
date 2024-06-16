#include <unistd.h>

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    int i = 0;
    char *str = argv[1];
    if (argc == 1)
    {
        write(1, "a", 1);
        write(1, "\n", 1);
        return (0);
    }

    while (str[i] != '\0')
    {
        if (str[i] == 'a')
        {
            write(1, &str[i], 1);
            write(1, "\n", 1);
            return (0);
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}