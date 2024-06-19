int is_power_of_2(unsigned int n)
{
    float tes = n;
    while (tes)
    {
        tes = tes / 2;
        if (tes == 2)
        {
            return (1);
        }
    }
    return (0);
}
