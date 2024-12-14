#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char r = 0;
	while (i > 0)
	{
		r = r * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return r;
}
int main() {
    unsigned char input = 170; 
	unsigned char reversed = reverse_bits(input);
    printf("Reversed bits: %u (0x%02X)\n", reversed, reversed);
    return 0;
}
