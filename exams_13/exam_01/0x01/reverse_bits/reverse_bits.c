unsigned char reverse_bits(unsigned char octet)
{
    int i = 0;

    unsigned char rus = 0;

    int last_bit;

    while (i != 8)
    {
        last_bit = octet & 1;

        octet = octet >> 1;

        rus = rus | last_bit;

        if (i != 7)
        {
            rus = rus << 1;
        }

        i++;
    }
    return (rus);
}

