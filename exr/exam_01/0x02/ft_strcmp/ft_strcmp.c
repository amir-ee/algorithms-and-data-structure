int len_z(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int ft_strcmp(char *s1, char *s2)
{
    int len_1 = len_z(s1);
    int len_2 = len_z(s2);

    if (len_1 > len_2)
    {
        return (1);
    }
    else if (len_1 < len_2)
    {
        return (-1);
    }
    else
    {
        int iu = 0;
        while (s1[iu] != '\0')
        {
            if (s1[iu] == s2[iu])
            {
            }
            else
            {
                return (-1);
            }
            iu++;
        }
        return (0);
    }
}
