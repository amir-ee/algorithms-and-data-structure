int len_z(char *b)
{
    int i = 0;

    while (b[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strrev(char *str)
{

    int len_x = len_z(str);

    int i = 0, j = len_x - 1, cp;
    char temp;

    if (len_x % 2 == 0)
    {
        cp = (len_x) / 2;

        while (cp)
        {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;

            i++;
            j--;

            cp--;
        }
        return (str);
    }
    else
    {
        while (1)
        {
            if (i == j)
            {
                return (str);
            }
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++;
            j--;

            cp--;
        }
    }
}
