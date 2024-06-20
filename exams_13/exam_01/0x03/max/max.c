int max(int *tab, unsigned int len)
{
    int x = 0, mx;

    if (len != 0)
    {
        mx = tab[0];
    }
    else
    {
        return (0);
    }
    int x1, x2;

    while (x < len)
    {
        if (tab[x] >= mx)
        {

            mx = tab[x];
        }
        x++;
    }
    return (mx);
}