#include <unistd.h>
#include <stdio.h>

int len_x(char *str);
int in_black_list(char *buf, char x);
void fill_arr_with_null_s(char *buf, int len);

int main(int ac, char **av)
{
    (void)ac;
    (void)av;

    if (ac != 3)
    {
        write(1, "\n", 1);
        return (0);
    }

    char *targ = av[1];
    char *m_string = av[2];

    int len_targ = len_x(targ);
    int len_string = len_x(m_string);

    int i = 0, i2 = 0;

    char buf[len_targ] ;
    fill_arr_with_null_s(buf, len_targ);

    while (i < len_targ)
    {
        i2 = 0;
        while (i2 < len_string)
        {

            char x4 = targ[i];
            char x5 = m_string[i2];
            if (x4 == x5)
            {
                int checking_if_in_black_list = in_black_list(buf, targ[i]);
                if (checking_if_in_black_list == 0)
                {
                    write(1, &targ[i], 1);
                    break;
                }
            }
            i2++;
        }

        i++;
    }
    write(1, "\n", 1);
    return (0);
}

int in_black_list(char *buf, char x)
{
    int i = 0;
    if (buf[0] == '\0')
    {
        buf[0] = x;
        return (0);
    }
    else
    {

        while (buf[i] != '\0')
        {
            if (buf[i] == x)
            {
                return (1);
            }
            if (buf[i] != '\0')
            {
                i++;
            }
        }
        buf[i] = x;
        return (0);
    }
}

void fill_arr_with_null_s(char *buf, int len)
{
    int i = 0;
    while (i < len)
    {
        buf[i] = '\0';
        i++;
    }
}

int len_x(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }

    return (i);
}