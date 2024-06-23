#include <stdio.h>
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

int main(int ac, char **av)
{
    char *x = "DeuxiEmE tEST uN PEU moinS  facile";
    int i = 0;
    char buf[1024];

    to_buffer(buf, x);

    while (buf[i] != '\0')
    {
        if (buf[i + 1] == ' ')
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
    
}