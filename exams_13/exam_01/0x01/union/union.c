#include <stdio.h>
#include <unistd.h>

int len_z(char *sr)
{
    int i = 0;
    while (sr[i] != '\0')
    {
        i++;
    }
    return (i);
}

int if_in_black_list(char *list_black, char targ)
{
    int mo = 0;
    while (list_black[mo] != '\0')
    {
        if (list_black[mo] == targ)
        {
            return (1);
        }
        mo++;
    }

    return (0);
}

void merge(char *s1, char *s2, char *rus)
{
    int i = 0, i1 = 0, i2 = 0;

    while (s1[i1] != '\0')
    {
        rus[i] = s1[i1];
        i++;
        i1++;
    }

    while (s2[i2] != '\0')
    {
        rus[i] = s2[i2];
        i++;
        i2++;
    }
    rus[i] = '\0';
}

int main(int ac, char **av)
{
    char *strv = av[1];
    char *str2 = av[2];

    if (ac != 3)
    {
        write(1, "\n", 1);
        return (0);
    }

    char str1[1024];

    int len_str1 = len_z(str1);
    int len_str2 = len_z(str2);
    char buf_black_list[1024];

    char bufRus[1024];

    /////////////

    merge(strv, str2, str1);

    /////////////
    int i = 0,
        i2 = 0, check, i_b = 0, i_bls = 0;
    while (str1[i] != '\0')
    {
        i2 = 0;
        while (str1[i2] != '\0')
        {
            char x1 = str1[i];
            char x2 = str1[i2];

            if (x1 == x2)
            {

                check = if_in_black_list(buf_black_list, str1[i]);
                if (check == 0)
                {
                    bufRus[i_b] = str1[i];
                    i_b++;
                    bufRus[i_b] = '\0';
                    buf_black_list[i_bls] = str1[i];
                    buf_black_list[i_bls + 1] = '\0';
                    i_bls++;

                    break;
                }
            }
            i2++;
        }
        i++;
    }

    int only_me = 0;
    while (bufRus[only_me] != '\0')
    {
        write(1, &bufRus[only_me], 1);
        only_me++;
    }
    write(1, "\n", 1);
    return (0);
}