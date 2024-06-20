
int is_power_of_2(unsigned int n)
{
    int tes = n, x;

    if (n == 0)
    {
        return (0);
    }

    tes--;

    x = tes & n;

    if (x == 0)
    {
        return (1);
    }

    return (0);
}
