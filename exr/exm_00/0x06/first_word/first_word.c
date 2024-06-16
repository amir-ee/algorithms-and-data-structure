#include <unistd.h>

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    char *str = argv[1];
    int i = 0;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\t')
        {
            i++;
            continue;
        }
        else
        {

            while (str[i] != '\0')
            {
                if (str[i] == '\t' || str[i] == ' ')
                {
                    write(1, "\n", 1);
                    return (0);
                }
                write(1, &str[i], 1);
                i++;
            }
            write(1, "\n", 1);
            return (0);
        }
    }
    write(1, "\n", 1);
    return (0);
}