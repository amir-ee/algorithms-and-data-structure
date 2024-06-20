#include <unistd.h>



void print_bits(unsigned char octet)
{
    int x = octet;
    char bits[8];
    int bit;
    char conv_s;
    int i = 0;

    while (x)
    {
        bit = x % 2;
        conv_s = bit + 48;
        bits[i] = conv_s;

        x = x / 2;
        i++;
    }

    int nr = 8 - i;
    while (nr)
    {
        write(1, "0", 1);
        nr--;
    }
    int o = 0;
    i--;
    while (i)
    {
        write(1, &bits[i], 1);
        i--;
    }
    write(1, &bits[i], 1);
}

int main()
{
    unsigned char octet = 157;

    print_bits(octet);
}

/*
    2 / 2 > 1     2 % 2  >  0
    1 / 2 > 0     1 % 2  >  1
    0

     1 0

*/