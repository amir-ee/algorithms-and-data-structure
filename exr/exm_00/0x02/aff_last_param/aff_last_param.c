#include <unistd.h>

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    char *last_arg = NULL;
    int i = 0;

    if (argc == 1)
    {
        write(1, "\n", 1);
        return (0);
    }

    while (argv[i] != NULL)
    {
        last_arg = argv[i];
        i++;
    }

    while (*last_arg != '\0')
    {
        write(1, last_arg, 1);
        last_arg++;
    }
    write(1, "\n", 1);
    return (0);
}