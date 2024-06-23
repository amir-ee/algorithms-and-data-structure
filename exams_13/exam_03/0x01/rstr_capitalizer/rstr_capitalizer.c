#include <unistd.h>

void to_buffer(char *buf, char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        buf[i] = str[i];

        i++;
    }
    buf[i] = '\0';
}

void print_z(char *targ)
{
    int i = 0;

    while (targ[i] != '\0')
    {
        write(1, &targ[i], 1);

        i++;
    }
    write(1, "\n", 1);
}

int main(int ac, char **av)
{

    if (ac <= 1)
    {
        write(1, "\n", 1);
        return (0);
    }

    char *x;
    int con = ac;
    int i = 0, bi = 1;
    char buf[1024];

    while (bi < con)
    {
        x = av[bi];
        i = 0;
        to_buffer(buf, x);

        ///////////////////

        while (buf[i] != '\0')
        {
            if (buf[i + 1] == ' ' || buf[i + 1] == '\0')
            {
                if (buf[i] >= 97 && buf[i] <= 122)
                {
                    buf[i] = buf[i] - 32;
                }
            }
            else if (buf[i] >= 65 && buf[i] <= 90)
            {
                buf[i] = buf[i] + 32;
            }
            i++;
        }
        print_z(buf);

        ///////////////////

        bi++;
    }
}