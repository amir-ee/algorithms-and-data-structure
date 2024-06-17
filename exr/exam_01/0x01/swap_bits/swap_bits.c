unsigned char swap_bits(unsigned char octet)
{

    unsigned char ruse = 0;

    unsigned char fr_half = octet;

    unsigned char sc_half = octet;

    fr_half = fr_half << 4;

    sc_half = sc_half >> 4;

    ruse = fr_half | sc_half;

    return (ruse);
}
