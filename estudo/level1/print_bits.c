#include <unistd.h>

void print_bits(unsigned char octet)
{
    int mask = 128;

    while(mask > 0)
    {
        if (octet & mask)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        mask = mask / 2;
    }
}