#include <unistd.h>

int len_z(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main(int ac, char **av)
{

    char *str = av[1];

    int ln = len_z(str);
    if (ac != 2 || ln == 0)
    {
        write(1, "\n", 1);
        return (0);
    }

    char buf[100];
    int i = 0, x = 0, b = 0;

    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\t')
        {
            buf[x] = str[i];
        }
        else
        {
            x = 0;
            i++;
            continue;
        }
        b++;
        i++;
        x++;
    }
    char x1 = str[i - 1];

    if (x1 == ' ' || x1 == '\t')
    {
        buf[b] = '\0';
    }
    else
    {
        buf[x] = '\0';
    }

    int vb = 0;

    while (buf[vb] != '\0')
    {
        write(1, &buf[vb], 1);
        vb++;
    }
    write(1, "\n", 1);
    return (0);
}