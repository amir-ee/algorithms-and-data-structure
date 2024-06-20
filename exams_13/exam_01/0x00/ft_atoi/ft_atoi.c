int ft_atoi(const char *str)
{
    int ruse_NUM = 0;

    int x = 0;
    int conv_d;
    int bol = 0;

    if (str[x] == '-')
    {
        bol = 1;
        x++;
    }

    while (str[x] != '\0')
    {
        conv_d = str[x] - 48;

        if (conv_d <= 9 && conv_d >= 0)
        {
            ruse_NUM = ruse_NUM + conv_d;
            if (str[x + 1] != '\0')
            {
                ruse_NUM = ruse_NUM * 10;
            }
            x++;
        }
        else
        {
            ruse_NUM = ruse_NUM / 10;
            if (bol == 1)
            {
                ruse_NUM = ruse_NUM * -1;
            }

            return (ruse_NUM);
        }
    }
    if (bol == 1)
    {
        ruse_NUM = ruse_NUM * -1;
    }

    return (ruse_NUM);
}
